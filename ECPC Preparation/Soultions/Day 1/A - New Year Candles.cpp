#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, ans=0, tmp=0;
    cin >> a >> b;
    
    ans=a;
    while(a/b>0) {
        ans+=a/b;
        tmp=a%b;
        a=a/b;
        a+=tmp;
    }
    cout<< ans;
    
    return 0;
}