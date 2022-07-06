// Codeforces Round #652 (Div. 2) - Problem B: AccurateLee (https://codeforces.com/problemset/problem/1369/B)
#include <bits/stdc++.h>

using namespace std;

string solve(int N, const string& S)
{
    string ans;
    int L = 0;

    while (L < N and S[L] == '0')
    {
        ans.push_back('0');
        ++L;
    }

    int R = N - 1;

    while (R >= 0 and S[R] == '1')
        --R;

    if (L < R)
        ans.push_back('0');

    for (int i = 0; i < N - 1 - R; ++i)
        ans.push_back('1');
 
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

        auto ans = solve(N, s);

        cout << ans << '\n';
    }

    return 0;
}
