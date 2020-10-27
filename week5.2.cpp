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
    ll m;
    cin >> m;
    ll mon[] = {2, 3, 1};
    ll minm[m + 1];
    vector<vector<ll>> v(m + 1);
    minm[0] = 0;
    minm[1] = 0;
    minm[2] = 1;
    minm[3] = 1;
    v[0] = {0};
    v[1] = {1};
    if (m > 1)
        v[2] = {1, 2};
    if (m > 2)
        v[3] = {1, 3};

    for (ll i = 4; i <= m; i++)
    {

        ll w;
        minm[i] = 10000;
        for (ll x : mon)
            if (i >= x)
            {
                if (x == 1)
                {
                    if (minm[i - x] + 1 < minm[i])
                    {
                        minm[i] = minm[i - x] + 1;
                        w = i - x;
                    }
                }

                else if (i % x == 0)
                    if (minm[i / x] + 1 < minm[i])
                    {
                        minm[i] = minm[i / x] + 1;
                        w = i / x;
                    }
            }

        v[i] = v[w];
        v[i].push_back(i);
    }

    cout << minm[m] << endl;
    for (ll d : v[1])
        cout << d << " ";

    return 0;
}