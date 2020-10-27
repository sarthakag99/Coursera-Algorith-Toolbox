#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    a[0]=0;
    a[1]=1;
    for(ll i=2;i<=n;i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    cout<<a[n]<<"\n";
}