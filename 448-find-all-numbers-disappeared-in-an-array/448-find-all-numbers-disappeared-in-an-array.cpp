class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> result;
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            int cur = abs(nums[i]);
            if(nums[cur-1] > 0)
                nums[cur-1] = -nums[cur-1]; 
        }
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > 0)
                result.push_back(i+1);
        }
        
        return result;
    }
};

/*
    1st Approach:- 
     Time: O(n), Space: O(n)
     
        [4,3,2,7,8,2,3,1]
        n = 8 
        1, 2, 3, 4, 5, 6, 7, 8
        
        - Create a hash set 
        - insert the given elements into this set 
        - Loop from 1 to n and check if elements from from 1 to are existing in the set 
          if yes, continue
          if no, push to the result array
          
          
    2nd Approach:-
     Time: O(nlogn), Space: O(1)
     
        given array:  [4,3,2,7,8,2,3,1]
        sorted array: [1,2,2,3,3,4,7,8]
        n = 8 
        [1,2]
        1, 2, 3, 4, 5, 6, 7, 8
        
        - Compare sorted to [lower -> upper]
        
        
    3rd Approach:-
     Time: O(n), Space: O(1)
     
        given array:  [4,3,2,7,8,2,3,1]
        array after negation: [-4,-3,-2,-7,8,2,-3,-1]
        if nums[i] > 0, push ind + 1 to the result
*/