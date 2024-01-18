#include <bits/stdc++.h>
using namespace std;
int demuoc(long long n)
{
    int dem=0;
    for (int i=1;i<=sqrt(n);i++)
    {
        if (n%i==0)
            dem=dem+2;
    }
    long long k=sqrt(n);
    if(k*k==n) 
    dem=dem-1;
    return dem;
}
int main()
{
    long long t,a,b,s=a=b=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        s=a*b;
        cout<<demuoc(s)<<endl;
    }
}
