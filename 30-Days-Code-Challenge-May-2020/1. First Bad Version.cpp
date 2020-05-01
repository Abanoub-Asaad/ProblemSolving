//Problem Link https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long long firstBadVersion(int n) {

        long long l=1, r=n, mid=(l+r)/2 ;

        if(n==1) return 1;
        else if(n==2)
        {
            if(isBadVersion(1))
                return 1;
            else
                return 2;

        }

        while(true)
        {
            if(isBadVersion(l))
                return l;

            else
            {
              if(isBadVersion(mid) && !isBadVersion(mid-1))
                   return mid;
              if(isBadVersion(r) && !isBadVersion(r-1))
                   return r;
              if(isBadVersion(mid))
                    r=mid, mid=(l+r)/2 ;
              else
                    l=mid, mid=(l+r)/2 ;
            }
        }
    }
};
