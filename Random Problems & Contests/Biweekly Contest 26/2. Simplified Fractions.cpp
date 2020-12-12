#include<string>  
#include <algorithm> 
#include <cmath>
using namespace std;
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        
        vector <string >v;
        set <string> st;
        
        if(n==1)
            return v;
          
        for(int j=2; j<=n; j++ ){
            for(int i=1; i<j; i++)
            {
                string s = to_string(i)+"/"+to_string(j);
                if(!st.count(s) )
                { 
                    if(i==1)
                         st.insert(s), v.push_back(s);
                    else{
                        if(j%i!=0 && __gcd(i,j)<=1)
                            st.insert(s), v.push_back(s);
                    }
                }
            }
        }

        return v;
    }
};