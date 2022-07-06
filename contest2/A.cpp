// AtCoder Beginner Contest 043 - Problem A: Children and Candies (ABC Edit) (https://atcoder.jp/contests/abc043/tasks/abc043_a?lang=en)
#include <bits/stdc++.h>

using namespace std;

int solve(int N)
{
    return N*(N + 1)/2;
}

int main()
{
    int N;
    cin >> N;

    auto ans = solve(N);

    cout << ans << '\n';

    return 0;
}
