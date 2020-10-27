#include<bits/stdc++.h>
typedef long long int ll;
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
        a[i]=(((a[i-2])%10)+((a[i-1])%10))%10;
    }
    cout<<a[n]<<"\n";
}