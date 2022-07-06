// AtCoder Beginner Contest 042 - Problem A: Iroha and Haiku (ABC Edition) (https://atcoder.jp/contests/abc042/tasks/abc042_a?lang=en)
#include <bits/stdc++.h>

using namespace std;

string solve(int a, int b, int c)
{
    vector<int> xs { a, b, c };

    sort(xs.begin(), xs.end());

    return xs == vector<int> { 5, 5, 7 } ? "YES" : "NO";
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    auto ans = solve(a, b, c);

    cout << ans << '\n';

    return 0;
}
