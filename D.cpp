// Codeforces Round #653 (Div. 3) - Problem C: Move Brackets (https://codeforces.com/problemset/problem/1374/C)
#include <bits/stdc++.h>

using namespace std;

int solve(const string& s)
{
    int open = 0, ans = 0;

    for (auto c : s)
    {
        switch (c) {
        case '(':
            ++open;
            break;

        default:
            open ? --open : ++ans;
        }
    }

    return ans;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string s;

        cin >> N >> s;

        auto ans = solve(s);

        cout << ans << '\n';
    }

    return 0;
}
