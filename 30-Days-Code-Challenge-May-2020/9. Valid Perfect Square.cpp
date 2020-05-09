//Problem Link : https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long i=1;
        while(i*i<=num){
            
            if(i*i==num)
                return true;
            ++i;
        }
        
        return false;
        
    }
};