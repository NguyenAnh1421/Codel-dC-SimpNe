#include<bits/stdc++.h>
using namespace std;
int y,k,n,temp;
int main()
{
 cin>>y>>k>>n;
 if (n-y==0) 
 {
    cout<<-1;
    return 0;
 }
 else
 {
    temp=(n-y)/k;
    for(int i=2;i<=temp+1;i++)
    {
      cout<<k*i-y<<" ";
    }
 }
} 