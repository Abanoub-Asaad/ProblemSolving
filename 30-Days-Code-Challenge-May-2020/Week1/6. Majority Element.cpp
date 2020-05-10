#include <map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map <int, int> mp ;
        int majorityElement=0, n=nums.size();
        
        for(int i=0; i<nums.size(); i++)
            ++mp[nums[i]] ;
        
        for(int i=0; i<nums.size(); i++)
        {
             if( mp[nums[i]] > n/2 )
             {
                 majorityElement = nums[i] ;
                 break ;
             }            
        }
           
        return majorityElement;
    }
};