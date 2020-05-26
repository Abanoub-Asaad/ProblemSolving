class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        map<int,int>mp ;
        mp[0]=-1;
        int max_length=0, cnt=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            (nums[i]) ? ++cnt : --cnt;
            
            if(mp.count(cnt))
                max_length=max(max_length, i-mp[cnt]);
            else 
                mp[cnt]=i;
        }
        
        return max_length;
    }
};