
// Using Hash map, complexity : O(n)

class Solution {
public:
    
    int singleNumber(vector<int>& nums) {
        
         unordered_map<int, int>um;
        
         for(int i=0; i<nums.size(); i++)
             um[nums[i]]++;
        
         for(auto i=um.begin(); i!=um.end(); i++)
             if(i->second == 1) 
                 return i->first;
        
        return 1;
    }
}; 


// Using bit manipulation, complexity : O(n)

class Solution {
public:
    
    int singleNumber(vector<int>& nums) {
        
         int a = 0;
         for(auto i : nums)
             a ^=i;
        
         return a;
    }
}; 
