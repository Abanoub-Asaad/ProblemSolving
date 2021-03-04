class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int a, b;
        int n=nums.size();
        vector<int>freq(n+1);
        
        for(auto i:nums) freq[i]++;
        for(int i=1; i<=n; i++)
        {
            if(freq[i]==2) a=i;
            if(freq[i]==0) b=i;
        }
        
        return {a,b};
    }
}; 
