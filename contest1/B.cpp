// AtCoder Beginner Contest 042 - Problem B: Iroha Loves Strings (ABC Edition) (https://atcoder.jp/contests/abc042/tasks/abc042_b?lang=en)
#include <bits/stdc++.h>

using namespace std;

string solve(vector<string>& xs)
{
    sort(xs.begin(), xs.end());

    string ans;

    for (auto x : xs)
        ans += x;

    return ans;
}

int main()
{
    int N, L;
    cin >> N >> L;

    vector<string> xs(N);

    for (int i = 0; i < N; ++i)
        cin >> xs[i];

    auto ans = solve(xs);

    cout << ans << '\n';

    return 0;
}
