#include<bits/stdc++.h>
using namespace std;
int p,n,k,sum=0;
int main()
{
    cin>>p>>n>>k;
    
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    if ((k*sum)>p)
    {
        cout<<"NO"<<endl<<(k*sum)-p;
    }
    else
    {
        cout<<"YES";
    }
}