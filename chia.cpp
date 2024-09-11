#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int t;
    while(n>0)
    {
        t=n%10;
        if(n%t==0)
        {
            n=n/10;
        }
        else return false;
        
    }
    return true;
}
int n,dem=0;
int main()
{
    freopen("chia.inp","r",stdin);
    freopen("chia.out","w",stdout);
    cin>>n;
    for(int i=11;i<=n;i++)
    {
        if(check(i)) 
        {
            dem++;
        }
    }
    cout<<dem;
}