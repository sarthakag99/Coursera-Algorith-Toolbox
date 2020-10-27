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

using std::string;
using std::vector;

ll lcs(vector<ll> &X, vector<ll> &Y)
{
    ll m = X.size();
    ll n = Y.size();

    vector<vector<ll>> L(m + 1, vector<ll>(n + 1, 0));
    ll i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n];
}

int main()
{
    ll m;
    cin >> m;

    vector<ll> X(m);
    for (ll i = 0; i < m; ++i)
    {
        cin >> X[i];
    }

    ll n;
    cin >> n;

    vector<ll> Y(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> Y[i];
    }

    cout << lcs(X, Y) << endl;

    return 0;
}