#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
using namespace std;
int main()
{
    ll mm, n;
    cin>>mm>>n;
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
    //cout<<"0 1 ";
    for(i=2;i<=n;i++)
    {
        v.pb((((v[i-2])%m)+((v[i-1])%m))%m);
        //cout<<v[i]<<" ";
        sum=((sum%m)+v[i])%m;
        if(v[i]==0 && v[i-1]==1)
        break;
    }
    ll a=n/i;
    ll b=mm/i;
    ll c=a-b-1;
    sum=((sum)%m*(c%m))%m;
    ll d=n%i;
    ll e=mm%i;
    for(ll j=0;j<=d;j++)
    {
       sum=((sum%m)+v[j])%m;
    }
    for(ll j=e;j<i;j++)
    {
        sum=((sum%m)+v[j])%m;
    }

    cout<<sum<<"\n";
}