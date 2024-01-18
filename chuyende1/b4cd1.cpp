#include<bits/stdc++.h>
using namespace std;
int n,f[1000006],maxgcd=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            maxgcd=max(maxgcd,__gcd(i,j));
        }
    }
    cout<<maxgcd;
}