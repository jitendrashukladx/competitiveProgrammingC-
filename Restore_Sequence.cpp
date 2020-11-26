#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
#define ll long long
//#define FORJ(start, end) for(auto j = start; j < end; j++)
long long N = 1000005;
long long sieve[1000005L];

void generateSieveArray() {
    for(ll i = 2;i<=N;i++) sieve[i] = 1; 
    
    for(ll i = 2;i*i<=N;i++) {
        if(sieve[i] == 1) {
            for(ll j = i*i;j<=N;j+=i) {
                sieve[j] = 0; 
            }
        }
    }
}

int main(){

    FASTIO;
    int t;
    cin >> t;

    generateSieveArray();
    while(t--){
        ll n;
        cin >>n;
        ll a[n+1], b[n+1], c[n+1], j=2L, i =1L ;
        while(i <= n) {
            if(sieve[j]){
                a[i++] = j;
            }
            j++;
        }
        
        for(ll k = 1; k <= n; k++) c[k] = a[k];
        for(ll k = 1; k <= n; k++) cin >> b[k];
        for(ll k = 1; k <= n; k++){
            if(b[k] != k) {
                 c[k] = a[b[k]];
            }
        }
        for(ll k = 1; k <= n; k++) cout<< c[k]<< " ";
        cout << endl;
    }
    return 0;
}