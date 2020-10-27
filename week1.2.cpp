#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll max=0;
    ll index=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    a[index]=0;
    ll max2=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>max2)
        max2=a[i];
    }
    ll p=max*max2;
    cout<<p<<"\n";


}