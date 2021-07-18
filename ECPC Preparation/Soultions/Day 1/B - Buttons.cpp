//Problem Link: https://codeforces.com/contest/268/problem/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans=0;
    cin >> n;
    
    if (n == 1) 
        return cout<<1, 0;
    
    ans=(n-1)+n;
    
    for (int i=n-1, j=1; i>1; i--, j++)
        ans+=i*j;
        
    return cout << ans, 0;
}