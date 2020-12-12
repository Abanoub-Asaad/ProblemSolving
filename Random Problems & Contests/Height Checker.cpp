//Problem Link : https://leetcode.com/problems/height-checker/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> v=heights;
        sort(v.begin(),v.end());
        int cnt=0;
        
        for(int i=0; i<v.size(); i++)
        {
            if(heights[i]!=v[i] )
                ++cnt;
        }
            
        return cnt;
    }
};