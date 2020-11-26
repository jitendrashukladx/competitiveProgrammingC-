#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int t;
    cin >> t;
    while(t--){
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string binary;
        cin >> binary;
        int count0 = 0, count1 = 0;
        int ans = 0, arbans = 0;
        REP(i, 0, binary.length()) {
            if(binary[i] == '1') count1++;
            if(binary[i] == '0') count0++;
        }
        arbans = count1*c1 + count0*c0;
        if(c1 > c0 && c1 > h) {
            ans = count1*h + count0*c0 + count1*c0;
        }else if( c1 < c0 && c0 > h) {

            ans = count0*h + count1*c1 + count0*c1;
        } else {
            ans  = count0*c0 + count1*c1;
        }
        ans = (ans < arbans) ? ans : arbans;
        cout << ans << endl;
    }
    return 0;
}