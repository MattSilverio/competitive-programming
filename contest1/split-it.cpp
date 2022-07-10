#include <bits/stdc++.h>
#define br '\n'
using namespace std;

void solve(){
    int n, k;   // variaveis do problema
    cin >> n >> k;  
    string str;
    cin >> str;

    if(2*k >= n){
        cout << "NO" << br;
        return;
    }else{
        for(int i = 0; i < k; i++){
            if(str[i] == str[n-1-i]){  // condiçao para verificar os primeiros e ultimos char da string
                continue;
            }else{
                cout << "NO" << br;
                return;
            }
        }
    cout << "YES" << br;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}