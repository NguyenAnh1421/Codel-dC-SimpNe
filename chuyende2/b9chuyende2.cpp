#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;
bool NT[nmax+5];
void sang()
{
    memset(NT,true,sizeof(NT));
    NT[0]=NT[1]=false;
    for(int i=2;i<=sqrt(nmax);i++)
        if(NT[i])
    for(int j=i*i;j<=nmax;j+=i)
        NT[j]=false;
}
int f[nmax+5];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    sang();
    f[1]=0;
    for(int i=2;i<=nmax;i++)
    {
      f[i]=f[i-1]+NT[i];  
    }
     int q;
    cin>>q;
    while(q--)
    {
        
    }
     
     return 0;
}