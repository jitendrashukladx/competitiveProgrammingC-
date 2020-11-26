#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
#define ll long long
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int t;
    cin >>t;
    while(t--){
        ll st, in, ex;
        cin >> st >> in >> ex;
        ll l = 0, h = ex+1;
        int count = 0;
        while(l < h) {
            ll m = (l+h)/2;
            if(m+in < st){
                count++;
                l = m+1;
            } else h = m-1;
        }
        cout << count << endl;
    }
    return 0;
}