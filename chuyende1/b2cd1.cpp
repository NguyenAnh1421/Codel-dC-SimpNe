#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}
int n,a[105],temp;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    temp=lcm(a[1],a[2]);
        for(int i=3;i<=n;i++)
        {
            temp=lcm(temp,a[i]);
        }
        cout<<temp<<"\n";
    for(int i=1;i<=n;i++)
    {
        cout<<temp/a[i]<<" ";
    }
}