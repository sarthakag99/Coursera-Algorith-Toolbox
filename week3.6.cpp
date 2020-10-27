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


//2d vector with all elements zero
//vector<vector<ll> > a(n,vector<ll> (n, 0));


// Function to return GCD or HCF of two numbers  
// ll gcd(ll a,ll b){ 
//     if (a == 0) 
//         return b;  
//     return gcd(b % a, a);  
// } 

  
// Function to return LCM of two numbers  
// ll lcm(ll a,ll b)  
// {  
//     return (a*b)/gcd(a, b);  
// }  


//fast io
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);


//fast power
// ll fast_pow(ll base, ll power)
// {
//     ll result = 1;
//     while (power > 0)
//     {

//         if (power % 2 == 1)
//         { // Can also use (power & 1) to make code even faster
//             result = (result * base) % MOD;
//         }
//         base = (base * base) % MOD;
//         power = power / 2; // Can also use power >>= 1; to make code even faster
//     }
//     return result;
// }


//ncr approach 1
// ll nCr(ll n, ll r)
// {
//     if (r > n - r)
//         r = n - r; // because C(n, r) == C(n, n - r)
//     ll ans = 1;
//     ll i;

//     for (i = 1; i <= r; i++)
//     {
//         ans = (ans * ((n - r + i) % MOD2)) % MOD2;
//         ans /= i;
//     }

//     return ans % MOD2;
// }


//ncr approach 2
// ll binomialCoeff(ll n, ll k) 
// { 
//     ll C[k+1]; 
//     memset(C, 0, sizeof(C)); 
  
//     C[0] = 1;  // nC0 is 1 
  
//     for (ll i = 1; i <= n; i++) 
//     { 
//         // Compute next row of pascal triangle using 
//         // the previous row 
//         for (ll j = min(i, k); j > 0; j--) 
//             C[j] = C[j] + C[j-1]; 
//     } 
//     return C[k]; 
// } 


//used to count 1's in binary number in O(1) time complexity
// __builtin_popcount(x);
// __builtin_popcountll(x);

int main()
{
    ll n;
    cin>>n;
    ll temp=n;
    if(n==1)
    {
        cout<<"1\n1";
        return 0;
    }
    if(n==2)
    {
        cout<<"1\n2";
        return 0;
    }
    vector<ll> v;
    ll count=1;
    v.pb(1);
    ll sum=1;
    while(1)
    {
        count++;
        if(sum+count<=n)
        {
            v.pb(count);
            sum=sum+count;
        }
        else
        {
            count--;
            sum=sum-count;
            ll m=n-sum;
            v.pop_back();
            v.pb(m);
            break;
        }
    }
    cout<<v.size()<<endl;
    for(ll i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}