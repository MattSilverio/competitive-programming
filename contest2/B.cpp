// AtCoder Beginner Contest 043 - Problem B: Unhappy Hacking (ABC Edit) (https://atcoder.jp/contests/abc043/tasks/abc043_b?lang=en)
#include <bits/stdc++.h>

using namespace std;

string solve(const string& s)
{
    string ans;

    for (auto c : s)
    {
        if (c == 'B')
        {
            if (not ans.empty())
                ans.pop_back();
        } else
            ans.push_back(c);
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;

    auto ans = solve(s);

    cout << ans << '\n';

    return 0;
}
