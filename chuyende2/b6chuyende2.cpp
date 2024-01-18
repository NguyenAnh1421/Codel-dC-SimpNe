#include<bits/stdc++.h>
using namespace std;
#define nmax 10000007
bool NT[nmax];
void sangnt()
{
	memset(NT,true,sizeof(NT));
	NT[0]=false;
	NT[1]=false; 
	for(int i=2;i<=sqrt(nmax);i++)
	if(NT[i])
	for (int j=i*i;j<=nmax;j+=i)
	NT[j]=false ;
	
}
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
long long t;int a,b;
int main()
{
 sangnt();
    cin>>t;
    while(t--)
    { 
        int dem;
        a=b=dem=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if (NT[(demuoc(i))]) dem++;
        }
        cout<<dem<<'\n';
    }
}