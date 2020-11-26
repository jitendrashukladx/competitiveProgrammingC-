#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int n;
    cin >> n;
    int xi =0, yi=0, zi=0;;
    REP(i, 0, n) {
        int t1, t2, t3; 
        cin >> t1 >> t2 >> t3;
        xi +=t1;
        yi +=t2;
        zi +=t3;
    }
    if(xi == 0 && yi == 0 && zi == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}