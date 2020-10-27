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
    string s1, s2;
    cin >> s1 >> s2;

    ll mat[s1.length() + 1][s2.length() + 1];

    for (ll i = 0; i <= s1.length(); i++)
        mat[i][0] = i;
    for (ll i = 0; i <= s2.length(); i++)
        mat[0][i] = i;

    for (ll i = 1; i <= s1.length(); i++)
        for (ll j = 1; j <= s2.length(); j++)
        {
            ll a = 0;
            if (s1[i - 1] == s2[j - 1])
                a = mat[i - 1][j - 1];
            else
                a = mat[i - 1][j - 1] + 1;
            mat[i][j] = min({mat[i - 1][j] + 1, mat[i][j - 1] + 1, a});
        }

    cout << mat[s1.length()][s2.length()];

    return 0;
}