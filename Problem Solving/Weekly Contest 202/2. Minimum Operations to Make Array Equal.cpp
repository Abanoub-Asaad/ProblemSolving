class Solution {
public:
    int minOperations(int n) {
        
        long long target=0, last=0, ans=0;

        target=n, last=target+(n-1);
        while(last!=target && last>target)
            ans+=last-target, last-=2;

        return ans;
    }
};