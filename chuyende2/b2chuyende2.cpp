#include <bits/stdc++.h>

using namespace std;
bool nt(long long n)
{
    if (n==3||n==2) return true;
    if(n%2==0||n%3==0) return false ;
    for(int i=5;i<=sqrt(n);i=i+6)
        if(n%i==0||n%(i+2)==0) return false;
    return n>1;
}
int main()
{
   long long n,dem=0;
   cin>>n;
   for(int i=1;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
           if(!nt(i)) dem++;
           if(!nt(n/i)) dem++;
       }
   }
   cout<<dem;
}
