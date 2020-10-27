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

using vector;

ll lcs3(vector<ll> &X, vector<ll> &Y, vector<ll> &Z)
{
    ll m = X.size();
    ll n = Y.size();
    ll o = Z.size();

    vector<vector<vector<ll>>> L(m + 1, vector<vector<ll>>(n + 1, vector<ll>(o + 1, 0)));
    ll i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            for (ll k = 0; k <= o; ++k)
            {
                if (i == 0 || j == 0 || k == 0)
                    L[i][j][k] = 0;

                else if (X[i - 1] == Y[j - 1] && X[i - 1] == Z[k - 1])
                    L[i][j][k] = L[i - 1][j - 1][k - 1] + 1;

                else
                    L[i][j][k] = max(max(L[i - 1][j][k], L[i][j - 1][k]), L[i][j][k - 1]);
            }
        }
    }

    return L[m][n][o];
}

int main()
{
    size_t an;
    cin >> an;
    vector<ll> a(an);
    for (size_t i = 0; i < an; i++)
    {
        cin >> a[i];
    }
    size_t bn;
    cin >> bn;
    vector<ll> b(bn);
    for (size_t i = 0; i < bn; i++)
    {
        cin >> b[i];
    }
    size_t cn;
    cin >> cn;
    vector<ll> c(cn);
    for (size_t i = 0; i < cn; i++)
    {
        cin >> c[i];
    }
    cout << lcs3(a, b, c) << endl;
}