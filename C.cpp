// Codeforces Round #650 (Div. 3) - Problem A: Short Substrings (https://codeforces.com/problemset/problem/1367/A)
#include <bits/stdc++.h>

using namespace std;

string solve(const string& s)
{
    string ans;

    for (size_t i = 0; i < s.size(); i += 2)
        ans.push_back(s[i]);

    ans.push_back(s.back());

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);

    int T;
    cin >> T;

    while (T--)
    {
        string b;
        cin >> b;

        auto ans = solve(b);

        cout << ans << '\n';
    }

    return 0;
}
