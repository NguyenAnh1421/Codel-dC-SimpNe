#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int main()
{
    cin>>n>>m;
    k=__gcd(n,m);
    cout<<k<<'\n';
    cout<<n/k<<" "<<m/k;
}