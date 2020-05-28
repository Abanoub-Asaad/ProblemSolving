//------------ not optimal solution 
using namespace std;
class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int>output; output.push_back(0);
        
        for(int i=1; i<=num; ++i)
        {
            int cnt=0, tmp=i;
            while(tmp!=0)
                (tmp%2==1) ? ++cnt, tmp/=2 : tmp/=2; 
            
            output.push_back(cnt);
        }
        
        return output;
    }
};
//----------------- optimal solution
class Solution {
public:
    vector<int> countBits(int num) 
    {
        vector<int> v(num+1, 0);
        for(int i=1;i<= num; i++) v[i]=v[i/2]+i%2;
        return v;
    }
};