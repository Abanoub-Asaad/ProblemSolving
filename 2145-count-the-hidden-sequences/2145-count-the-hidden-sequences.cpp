class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        
        int n = differences.size();
        long long current = differences[0];
        long long result = 0, mn = current, mx = current;
      
        for(int i = 1; i < differences.size(); i++)
        {
            current = current + differences[i];
            mn = min(mn, current);
            mx = max(mx, current);
        }
        
        for(int i = lower; i <= upper; i++)
        {
            if(mn + i >= lower && mn + i <= upper && mx + i >= lower && mx + i <= upper)
                ++result;
        }
        
        return (int)result;
    }
};
