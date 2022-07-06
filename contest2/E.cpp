// Codeforces Round #659 (Div. 2) - Problem A: Common Prefixes (https://codeforces.com/problemset/problem/1384/A)
#include <bits/stdc++.h>

using namespace std;

vector<string> solve(int, const vector<int>& xs)
{
    vector<string> ans { string(50, 'a') };

    for (auto x : xs)
    {
        string s = ans.back();

        s[x] = s[x] == 'a' ? 'b' : 'a';

        ans.emplace_back(s);
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
        cin >> N;

        vector<int> xs(N);

        for (int i = 0; i < N; ++i)
            cin >> xs[i];

        auto ans = solve(N, xs);

        for (auto x : ans)
            cout << x << '\n';
    }

    return 0;
}
