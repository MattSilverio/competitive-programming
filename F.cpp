// OJ 213 - Message Decoding (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=149)
#include <bits/stdc++.h>

using namespace std;

int next(size_t N, queue<char>& q)
{
    while (q.size() < N)
    {
        string line;
        getline(cin, line);

        for (auto c : line)
            q.push(c);
    }

    int x = 0;

    while (N--)
    {
        x *= 2;
        x += (q.front() - '0');
        q.pop();
    }

    return x;
}

string solve(const string& header)
{
    queue<char> q;
    string ans; 

    int N = next(3, q);

    while (N)
    {
        auto end = (1 << N) - 1;

        auto x = next(N, q);

        if (x == end)
        {
            N = next(3, q);
        } else
        {
            for (int i = 0; i < N; ++i)
                x += ((1 << i) - 1);

            ans.push_back(header[x]);
        }
    }

    return ans;
}

int main()
{
    string header;

    while (getline(cin, header))
    {
        auto ans = solve(header);

        cout << ans << '\n';
    }

    return 0;
}
