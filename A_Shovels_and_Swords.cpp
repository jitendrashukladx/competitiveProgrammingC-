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
        long long a, b;
        cin >> a >>b;
        long long c = (a+b)/3;
        cout << min(min(a,b),c) << endl;
    }
    return 0;
}