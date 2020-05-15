//----------------------- O(n) 

#include <climits>
using namespace std;
class Solution {
    int num_negatives=0, mx_negative=INT_MIN;
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        //check if All elements are nrgative 
        for(int i=0; i<A.size(); i++)
            if(A[i]<0) ++num_negatives, mx_negative=max(mx_negative, A[i]);
        
        if(num_negatives==A.size())
            return mx_negative;
            
        int max_kadane = kadane(A, A.size());  
        int max_wrap = 0;  
        for (int i = 0; i < A.size(); i++)  
        {  
            max_wrap += A[i]; // Calculate array-sum  
            A[i] = -A[i]; // invert the array (change sign)  
        }  
         max_wrap = max_wrap + kadane(A, A.size()); 
          return (max_wrap > max_kadane)? max_wrap: max_kadane; 
    }
    
    int kadane(vector<int>& A, int n){
        
        int max_so_far = INT_MIN, max_ending_here = 0;  
        
        for (int i = 0; i < n; i++)  
        {                  
            max_ending_here += A[i];  
            if (max_ending_here < 0)  
                max_ending_here = 0;  
            if (max_so_far < max_ending_here)  
                max_so_far = max_ending_here;  
        }  
        return max_so_far;  
    }  
};

//-------------------- O(n^2)  --> TimeLimit test 98

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
    
        int mx_sum=A[0]; 
        
        for(int i=0; i<A.size(); i++)
        {
            int sum=0;
            
            for(int j=i; j<A.size(); j++)
                sum+=A[j], mx_sum=max(mx_sum,sum) ;
            for(int j=0; j<i; j++)
                sum+=A[j], mx_sum=max(mx_sum,sum) ;
        }
        return mx_sum;
    }
};
//---------------------------