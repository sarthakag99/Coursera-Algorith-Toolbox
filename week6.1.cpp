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

int main()
{
    ll w, n;
    cin >> w >> n;
    ll wt[n];
    for (ll i = 0; i < n; i++)
        cin >> wt[i];
    vector<vector<ll>> ans(w + 1, vector<ll>(n + 1, 0));
    for (ll i = 0; i < w + 1; i++)
        for (ll j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
                ans[i][j] = 0;
            else if (wt[j - 1] <= i)
                ans[i][j] = max(wt[j - 1] + ans[i - wt[j - 1]][j - 1], ans[i][j - 1]);
            else
                ans[i][j] = ans[i][j - 1];
        }

    cout << ans[w][n];
    return 0;
}