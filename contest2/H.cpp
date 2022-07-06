// OJ 726 - Decode (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=667)
#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, char>;

string solve(const string& know, const string& encoded)
{
    vector<int> hk(26, 0), he(26, 0);

    for (auto c : know)
        if (isalpha(c))
            ++hk[tolower(c) - 'a'];

    for (auto c : encoded)
        if (isalpha(c))
            ++he[tolower(c) - 'a'];

    vector<ii> xs(26), ys(26);

    for (int i = 0; i < 26; ++i)
        xs[i] = ii(-hk[i], i + 'a');

    for (int i = 0; i < 26; ++i)
        ys[i] = ii(-he[i], i + 'a');

    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());

    map<char, char> table;

    for (int i = 0; i < 26; ++i)
        table[ys[i].second] = xs[i].second;

    string ans;

    for (auto c : encoded)
    {
        auto pos = (char) tolower(c);

        if (isalpha(c))
            ans.push_back(isupper(c) ? (char) toupper(table[pos]) : (char) tolower(table[pos]));
        else
            ans.push_back(c);
    }

    return ans;    
}

int main()
{
    ios::sync_with_stdio(false);

    string line, know, encoded;

    while (getline(cin, line), line.size())
    {
        know += line;
        know.push_back('\n');
    }

    while (getline(cin, line))
    {
        encoded += line;
        encoded.push_back('\n');
    }

    auto ans = solve(know, encoded);

    cout << ans;

    return 0;
}
