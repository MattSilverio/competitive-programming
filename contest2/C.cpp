// Codeforces Round #762 (Div. 3) - Problem A: Square String? (https://codeforces.com/problemset/problem/1619/A)
#include <bits/stdc++.h>

using namespace std;

string solve(const string& s)
{
    auto N = s.size();

    if (N % 2)
        return "NO";

    for (size_t i = 0; i < N / 2; ++i)
        if (s[i] != s[N/2 + i])
            return "NO";

    return "YES";
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        auto ans = solve(s);

        cout << ans << '\n';
    }

    return 0;
}
