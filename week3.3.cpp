#include<bits/stdc++.h>
#define MOD (ll)1000000007 
#define MOD2 998244353
#define ll long long int
#define ull unsigned long long int
#define lf double
#define ld long double
#define MAX LLONG_MAX
#define MIN LLONG_MIN 
#define UMAX ULLONG_MAX
#define pb push_back
#define endl "\n"  
using namespace std;

int main()
{
    ll d;
    cin>>d;
    ll m;
    cin>>m;
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]>m)
    {
        cout<<"-1\n";
        return 0;
    }
    ll pre=0;
    ll count=0;
    ll index=0;
    a[n]=d;
    ll flag=0;
    for(ll i=0;i<=n;i++)
    {
        
        if(a[i]-pre>m)
        {
            if(pre==a[i-1])
            {
                flag=1;
                break;
            }
            pre=a[i-1];
            index=i-1;
            count++;
            i--;
        }
    }
    if(flag==1)
    {
        cout<<"-1\n";
        return 0;
    }
    if(a[index]+m>=d)
    {
        cout<<count<<endl;
        return 0;
    }
    else
    {
        cout<<"-1\n";
        return 0;
    }
    

}