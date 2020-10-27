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
    ll n;
    cin >> n;
    ll p[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }

    if (sum % 3 != 0)
        cout << "0" << endl;
    else
    {
        ll par[sum + 1][n + 1];

        for (ll i = 0; i <= sum; i++)
        {
            ll c = 0;
            for (ll j = 0; j <= n; j++)

            {

                if (i == 0)
                    par[i][j] = 1;
                else if (j == 0 && i != 0)
                    par[i][j] = 0;
                else if (p[j - 1] <= i)
                    par[i][j] = (par[i][j - 1] || par[i - p[j - 1]][j - 1]);
                else
                    par[i][j] = par[i][j - 1];
                if (par[i][j] == 1)
                    c++;
            }
            if (i == sum / 3 && c > 1)
                cout << "1" << endl;
            else if (i == sum / 3)
                cout << "0" << endl;
        }
    }

    return 0;
}