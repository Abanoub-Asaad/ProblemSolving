#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string ans="", t="";
    cin >> n >> t;
    
    if (t == "10") {
        if (n == 1) 
            ans = "-1";
        else 
        {
            n-=2, ans="10";
            while(n--) {
                ans+="0";
            }
        }
        return cout << ans, 0;
    } 
    
    while(n--) {
        ans+=t;
    }
    
    return cout << ans, 0;
}