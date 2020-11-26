#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    string expr;
    cin >> expr;
    int count1 = 0, count2 = 0, count3 = 0, operand = 0;
    string ans;
    FORI(0, expr.length()) {
        if(expr[i] == '1') count1++;
        if(expr[i] == '2') count2++;
        if(expr[i] == '3') count3++;

    }
    //cout << "one:" <<count1 << " two: " << count2 << " three:" << count3;
    int length = expr.length();
    int k = 0;
    FORI(0, count1){
        ans.push_back('1');
        if(ans.length() < expr.length())
            ans.push_back('+');
    }
    FORI(0, count2){
        ans.push_back('2');
        if(ans.length() < expr.length())
            ans.push_back('+');
    }
    FORI(0, count3){
        ans.push_back('3');
        if(ans.length() < expr.length())
            ans.push_back('+');
    }
    cout << ans;
    return 0;
}