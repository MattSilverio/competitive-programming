// OJ 740 - Baudot Data Communication Code (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=681)
#include <bits/stdc++.h>

using namespace std;

string solve(const string& s, const string& down, const string& up)
{
    const int SD = 27, SU = 31;
    size_t state = 0, N = s.size();
    string ans;

    for (size_t i = 0; i < N; i += 5)
    {
        int pos = 0;

        for (size_t j = 0; j < 5; ++j)
        {
            pos *= 2;
            pos += (s[i + j] - '0');
        }

        if (pos == SD)
        {
            state = 0;
            continue;
        }

        if (pos == SU)
        {
            state = 1;
            continue;
        }

        state == 0 ? ans.push_back(down[pos]) : ans.push_back(up[pos]);
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);

    string down, up;
    getline(cin, down);
    getline(cin, up);

    string line;

    while (getline(cin, line))
    {
        auto ans = solve(line, down, up);

        cout << ans << '\n';
    }

    return 0;
}
