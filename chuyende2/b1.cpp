#include <bits/stdc++.h>

using namespace std;
int ucln(int a,int b)
{
    while (b>0)
    {
       int r=a%b;
        a=b;
        b=r;
    }
return a;
}
int a[1000001];
int n,t;
int main()
{
    cin>>n;
    for (int i=1; i<=n;i++) cin>>a[i];
    cout <<a[1]<<" ";
    for(int i=2; i<=n; i++) cout<<a[i-1]*a[i]/ucln(a[i-1],a[i])<<" ";
    cout<<a[n]<<" ";
    return 0;
}