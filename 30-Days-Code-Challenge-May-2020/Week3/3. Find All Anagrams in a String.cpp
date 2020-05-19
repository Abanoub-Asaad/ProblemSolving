//-----------------TimeLimit, test 34/36 :(
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector <int> v;
        string tmp="";
        int n=p.size();
        sort(p.begin(), p.end());
        
        for(int i=0; i<s.size(); i++){
            if(i+n<=s.size())
            {
                tmp=s.substr(i,n), sort(tmp.begin(), tmp.end());
                if(tmp==p)
                    v.push_back(i);
            }   
            else 
                break;
        }
        
        return v;
    }
};

//=========== Accepted
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int letters[26] = {0};
        for(char c : p) letters[c - 'a']++;
        
        vector<int> result;
        int remaining = p.size(), j = 0;
        for(int i = 0; i< s.size(); i++){
            while(j < s.size() && j - i < p.size()){
                if(letters[s.at(j++) - 'a']-- > 0)
                    remaining--;
            }
            if(remaining == 0 && j - i == p.size()) 
                result.push_back(i);
            if(letters[s.at(i) - 'a']++ >= 0) 
                remaining++;            
        }
        return result;
    }
};