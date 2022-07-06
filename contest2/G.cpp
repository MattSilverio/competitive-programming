// OJ 632 - Compression (II) (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=573)
#include <bits/stdc++.h>

using namespace std;

pair<int, string> solve(size_t N, string& s)
{
    if (N == 1lu)
        return { 0, s };

    int x = -1;
    string ans;

    vector<string> xs;

    s += s;

    for (size_t i = 0; i < N; ++i)
        xs.emplace_back(s.substr(i, N));

    string s1 = xs[1];

    sort(xs.begin(), xs.end());

    for (size_t i = 0; i < xs.size(); ++i)
    {
        if (xs[i] == s1 and x == -1)
            x = (int) i;

        ans.push_back(xs[i].back());
    }

    return { x, ans };
}

int main()
{
    ios::sync_with_stdio(false);

    string line;
    getline(cin, line);

    int T = stoi(line);

    for (int test = 0; test < T; ++test)
    {
        getline(cin, line);

        getline(cin, line);
        size_t N = stoi(line);

        string s;

        while (s.size() < N)
        {
            getline(cin, line);
            s += line;
        }

        auto [x, ans] = solve(N, s);

        if (test)
            cout << '\n';

        cout << x << '\n';

        for (size_t i = 0; i < ans.size(); ++i)
        {
            if (i and i % 50 == 0)
                cout << '\n';

            cout << ans[i];
        }

        cout << '\n';
    }

    return 0;
}
