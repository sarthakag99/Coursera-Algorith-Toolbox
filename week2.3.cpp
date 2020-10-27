#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll gcd(ll a,ll b)
{
    if(a==0)
    return b;
    else
    {
        gcd(b%a,a);
    }
    
}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll ans=gcd(a,b);
    cout<<ans<<"\n";
}