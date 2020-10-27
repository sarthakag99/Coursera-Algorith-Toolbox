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
ll lcm(ll a,ll b)
{
    ll ans=gcd(a,b);
    ans=(a*b)/ans;
    return ans;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll ans=lcm(a,b);
    cout<<ans<<"\n";
}