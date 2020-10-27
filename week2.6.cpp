#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    vector<ll> v;
    v.pb(0);
    v.pb(1);
    ll m=10;
    ll sum=1;
    ll i;
    for(i=2;i<=n;i++)
    {
        v.pb((((v[i-2])%m)+((v[i-1])%m))%m);
        sum=((sum%m)+v[i])%m;
        if(v[i]==0 && v[i-1]==1)
        break;
    }
    sum=(sum*(n/i))%m;
    ll ans=n%i;
    for(i=0;i<=ans;i++)
    {
        sum=((sum%m)+v[i])%m;
    }

    cout<<sum<<"\n";
}