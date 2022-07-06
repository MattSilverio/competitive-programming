// Educational Codeforces Round 102 (Rated for Div. 2) - Problem B: String LCM (https://codeforces.com/problemset/problem/1473/B)
#include <bits/stdc++.h>

using namespace std;

string solve(const string& s, const string& t)
{
    auto a = s.size(), b = t.size();
    auto m = lcm(a, b);
     
    string x, y;

    for (size_t i = 0; i < m / a; ++i)
        x += s;

    for (size_t i = 0; i < m / b; ++i)
        y += t;

    return x == y ? x : "-1";
}

int main()
{
    ios::sync_with_stdio(false);

    int T;
    cin >> T;

    while (T--)
    {
        string s, t;
        cin >> s >> t;

        auto ans = solve(s, t);

        cout << ans << '\n';
    }

    return 0;
}
