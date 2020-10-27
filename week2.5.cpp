#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    v.pb(0);
    v.pb(1);
    ll i;
    for(i=2;i<=n;i++)
    {
        v.pb((((v[i-2])%m)+((v[i-1])%m))%m);
        if(v[i]==0 && v[i-1]==1)
        break;
    }
    ll ans=n%i;
    cout<<v[ans]<<"\n";
    
}