#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    string str;
    string ans="";
    set<char> chars = {'A', 'E', 'I', 'O', 'U', 'Y'};
    cin >> str;
    FORI(0, str.length()) {
        if(chars.find(toupper(str[i]))==chars.end()){
            ans.push_back('.');
            ans.push_back(tolower(str[i]));
        }
    }
    cout << ans;
    return 0;
}