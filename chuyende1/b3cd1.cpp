#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
        return n>1;
    }
}
string s,n;int s1,n1;
int main()
{
    getline(cin,s);
    n=s;
    reverse(n.begin(),n.end());
    s1=stoi(s);
    n1=stoi(n);
    if(check(s1) and check(n1))
    {
        cout<<"1";
    }
    else 
    {
        cout<<"0";
    }
}