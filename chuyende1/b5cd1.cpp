#include<bits/stdc++.h>
using namespace std;
bool scp(int n)
{
   int k=sqrt(n);
    if (k*k==n) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int n,a[100005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(scp(a[i]))
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}