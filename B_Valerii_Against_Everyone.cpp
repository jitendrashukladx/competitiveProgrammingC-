#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
#define ll long long
//#define FORJ(start, end) for(auto j = start; j < end; j++)

ll power(ll base, ll n){
    ll ans = 1;
    while(n!= 0){
        if(n%2 == 0) {
            base = base*base;
            n = n/2;
        } else {
            ans *= base;
            n = n-1;
        }
    }
    return ans;
}

int main(){
    FASTIO;
    int t;
    cin >> t;
    while(t--) {
        ll n;
        ll b[n], a[n], prefix[n];
        cin >> n;
        REP(i, 0, n) {
            cin >> b[i];
            a[i] = power(a[i], b[i]);
            if(i == 0) prefix[i] = a[i];
            else prefix[i] = prefix[i-1] + a[i];
        }
        
        ll l1 =0, r1 = n/2 -1, l2= r1+1, r2 = n-1;
        while(){
            int leftSum = 0, rightSum = 0;
            if(l1 == 0) leftSum = prefix[r1];
            else leftSum = 
            if((prefix[r1] -prefix[l1])== prefix[])
        }
    }
    
    return 0;
}