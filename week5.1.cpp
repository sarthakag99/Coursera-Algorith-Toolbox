#include <bits/stdc++.h>
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

using std:: vector;
vector<ll> coins = {1, 3, 4};

ll get_change(ll m)
{

    vector<ll> table(m + 1);

    table[0] = 0;

    for (ll i = 1; i <= m; ++i)
        table[i] = INT_MAX;

    for (ll i = 1; i <= m; ++i)
    {
        for (ll j = 0; j < m; ++j)
        {
            if (coins[j] <= i)
            {
                ll sub_res = table[i - coins[j]];
                if (sub_res != INT_MAX && sub_res + 1 < table[i])
                    table[i] = sub_res + 1;
            }
        }
    }
    return table[m];
}

int main()
{
    ll m;
    cin >> m;
    cout << get_change(m) << '\n';
}