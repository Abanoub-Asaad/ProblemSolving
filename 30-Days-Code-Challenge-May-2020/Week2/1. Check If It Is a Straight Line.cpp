//Problem Link : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        vector <int> vector_Xs;
        map <int,int> mp;
        
        
        for(int i=0; i<coordinates.size(); i++)   
            vector_Xs.push_back(coordinates[i][0]), mp[coordinates[i][0]]=coordinates[i][1];
        
        sort(vector_Xs.begin(), vector_Xs.end());

        double slope ; bool flag=false;
        int difference_X = vector_Xs[1] - vector_Xs[0];
        int difference_Y = mp[vector_Xs[1]] - mp[vector_Xs[0]];
        
        if(difference_X)
             slope = (difference_Y/difference_X), flag=true;
        
        for(int i=2; i<coordinates.size(); i++){
            if(!flag)
            {
                if((vector_Xs[i]-vector_Xs[i-1])!=difference_X)
                    return false;
            }
            else
            {
                
                if(vector_Xs[i]-vector_Xs[i-1])
                {
                    if ( (mp[vector_Xs[i]]-mp[vector_Xs[i-1]]) / (vector_Xs[i]-vector_Xs[i-1]) != slope )
                      return false;
                }

            }     
        }

        return true;
        
    }
};