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

using std::max;
using std::min;
using std::string;
using std::vector;

ll eval(ll a, ll b, char op)
{
    if (op == '*')
    {
        return a * b;
    }
    else if (op == '+')
    {
        return a + b;
    }
    else if (op == '-')
    {
        return a - b;
    }
    else
    {
        assert(0);
    }
}

ll get_maximum_value(const string &exp)
{
    return 0;
}

int main()
{
    string s;
    std::cin >> s;
    std::cout << get_maximum_value(s) << '\n';
}