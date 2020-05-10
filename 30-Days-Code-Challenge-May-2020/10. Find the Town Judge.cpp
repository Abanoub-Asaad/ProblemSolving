//Problem Link : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/

using namespace std;
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
         
       
        map <int, int>mp ;
        map <int, int>::iterator it;
        int mx1=-1, num_times_appear_mx1=-1, num_times_appear_mx2=-1;
        bool flag=1;
        
        if(N==1)
            return 1;
        
        for(int i=0; i<trust.size(); i++){
            ++mp[trust[i][1]];
        }
        
 
        for(it=mp.begin() ; it!=mp.end(); ++it){
           if(it->second > num_times_appear_mx1)
               num_times_appear_mx2=num_times_appear_mx1, num_times_appear_mx1=it->second, mx1=it->first;
            else if(it->second == num_times_appear_mx1)
                num_times_appear_mx2=num_times_appear_mx1;
        }
        
        for(int i=0; i<trust.size(); i++){
            if(trust[i][0]==mx1)
                flag=0;
        }
  
        if(num_times_appear_mx1==num_times_appear_mx2 || !flag )
             return -1; 
        return mx1;
    }
};