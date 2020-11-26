#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    string str;
    cin >> str;
    string s = "hello";
    int j = 0;
    map<char, vector<int>> vi;
    FORI(0, str.length()){
        if(str[i] == s[j]){
            j++;
        }
        if(j == 5){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}