#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
#define ll long long
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    ll m = n%2 == 0 ? n/2 : (n/2) +1;
    if(k > m){
        REP(i, 0, k - m){
            ans +=2;
        }
    }
    if(k <= m){
        ans += 1;
        REP(i, 1, k){
            ans +=2;
        }
    }
    cout << ans;
    return 0;
}