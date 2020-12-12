 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    { 
        //built-in SORT function take O(n*log(n))  "log base 2"
        
        sort(nums.begin(), nums.end());
        int res = nums.size()-k;
        return nums[res];
        
    }
};
