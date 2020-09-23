class Solution {
public
    bool threeConsecutiveOdds(vectorint& arr) {
        
        bool ans = false;
        
        if(arr.size()3)
            return ans;
        
        for(int i=0; iarr.size()-2; i++)
        {
            if(arr[i]%2 && arr[i+1]%2 && arr[i+2]%2 )
                ans = true;
        }
        
        return ans;
    }
};