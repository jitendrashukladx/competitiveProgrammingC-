#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    string s1, s2;
    cin >> s1 >> s2;
    int flag = 0;
    for(int i = 0; i < s1.length(); i++){
        if(tolower(s1[i]) < tolower(s2[i])) {
            cout << "-1";
            return 0;
        }
        if(tolower(s1[i]) > tolower(s2[i])) {
            cout << "1";
            return 0;
        }
    }
    cout << "0";
    return 0;
}