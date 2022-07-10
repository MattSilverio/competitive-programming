#include <iostream>
using namespace std;
 
bool check(string str)
{
     
    int freq[26] = {0};
     
    int n = str.length();
    for (int i = 0; i < str.length(); i++)
     
    freq[str[i] - 97]++;
   
    for (int i = 0; i < 26; i++)
        if (freq[i] % 2 == 1)
        return false;
    return true;
}


int main()
{
    string str;
    cin >> str;
    check(str) ? cout << "Yes" << endl :
               cout << "No" << endl;
    return 0;
}