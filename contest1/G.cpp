// OJ 306 - Cipher (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=242)
#include <bits/stdc++.h>

using namespace std;

const int MAX { 210 };

bitset<MAX> found;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int cycle_len(int N, const vector<int>& key)
{
    found.reset();
    int len = 1;

    for (int i = 0; i < N; ++i)
    {
        if (found[i])
            continue;

        int count = 0;

        for (int p = i; not found[p]; ++count, p = key[p])
            found[p] = true;

        len = (len * count) / gcd(len, count);
    }

    return len;
}

string solve(int N, const vector<int>& key, int k, const string& s)
{
    string ans = s, next = s;

    while (k--)
    {
        for (int i = 0; i < N; ++i)
            next[key[i]] = ans[i];

        swap(next, ans);
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);

    string line;

    while (getline(cin, line), line != "0")
    {
        int N = stoi(line);

        getline(cin, line);

        istringstream is(line);

        vector<int> xs(N);

        for (int i = 0; i < N; ++i)
        {
            is >> xs[i];
            xs[i]--;
        }

        auto L = cycle_len(N, xs);

        while (getline(cin, line), line != "0")
        {
            auto pos = line.find(' ');
            int k = stoi(line.substr(0, pos));
            auto m = line.substr(pos + 1);

            while ((int) m.size() < N)
                m.push_back(' ');

            auto ans = solve(N, xs, k % L, m);

            cout << ans << '\n';
        }

        cout << '\n';
    }

    return 0;
}
