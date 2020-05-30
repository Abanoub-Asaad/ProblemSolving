#include <math.h>  
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
     
       vector<vector<int>> output; 
       vector<int> v; 
       map<int , vector<int>>mp;
       int tmp=0, cnt=0; 
        
        for(int i=0; i<points.size(); ++i)
        {
            tmp=points[i][0]*points[i][0]+points[i][1]*points[i][1] ;
            v.push_back(tmp) ;
            mp[tmp].push_back(i);
        }      
        
        sort(v.begin() , v.end());
        
        for(int i=0; i<v.size(); ++i)
        {
            for(int j=0; j<mp[v[i]].size(); ++j)
            {
                int ind=mp[v[i]][j];
                output.push_back({points[ind][0],points[ind][1]}), ++cnt;
                if(cnt==K) return output;
            }
                
        }
        
        return output;
    }
};