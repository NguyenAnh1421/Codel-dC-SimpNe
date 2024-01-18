#include<bits/stdc++.h>
using namespace std;
int tcs(long long n)
{
    int s=0;
        while(n!=0)
        {
        s+=n%10;
        n=n/10;
        }
    return s;
}
long long N,dem=0,temp;
int main()
{
 cin>>N;
 for(int i=1;i<=sqrt(N);i++)
 {
    if(N % i == 0)
    {
        if ( (i * ( tcs(i) +i ) ) == N ) 
        { 
             dem++;
             temp=i;
             break;
        }
    }
 }
    if ( dem == 0 )
    {
        cout<<-1;
    }
    else 
    {
        cout<<temp;
    }
}