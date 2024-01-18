#include<bits/stdc++.h>
#define nmax 1000007
using namespace std;
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
bool check(int n)
{
    sangnt();
    while(n)
    {
        if (!NT[n]) return false;
        n/=10;
    }
    return true;

}
int a,b;
int main()
{
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if (check(i))
        {
            cout<<i<<endl;
        }
    }
}