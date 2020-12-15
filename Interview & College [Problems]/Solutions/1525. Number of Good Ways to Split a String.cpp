//--- O(n) SOLUTION

class Solution {
public:
    int numSplits(string s) {
        
        unordered_map<char, int>u_map1, u_map2;
        int cnt=0;

        for(int i=0; i<s.size(); i++)
            u_map2[s[i]]++;
        
        for(int i=0; i<s.size(); i++)
        {
            u_map1[s[i]]++;
            (u_map2[s[i]]>1) ? --u_map2[s[i]] : u_map2.erase(s[i]);
            
            if(u_map1.size() == u_map2.size())
                ++cnt;
        }
        return cnt;
    }
};