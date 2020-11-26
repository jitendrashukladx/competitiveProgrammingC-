#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
#define ll long long

//time complexity is log n without mod
//binary exponentiation
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
//modulo exponentiation
ll power(ll base, ll n, ll mod){
    ll ans = 1;
    while(n!= 0){
        if(n%2 == 0) {
            base = (base * base) % mod;
            n = n/2;
        } else {
            ans = (ans * base) % mod;
            n = n-1;
        }
    }
    return ans;
}

//prime nos.using sieve
//time complexity O(N)
ll*  generateSieve() {
    ll N = 1000001;
    ll sieve[N] = {0};
    for(int i = 2; i < N; i++) sieve[i] = 1; //O(N)

    for(int i = 2; i*i <= N; i++){    //O(sqrt(N))
        if(sieve[i] == 1){
            for(int j = i*i; j <=N; j += i){    // time complexity undertemined but is assumed to be log N
                sieve[j] = j;
            }
        }
    }
    return sieve;
}

//generate modified sieve for prime factorization
ll* generateModifiedSieve(){
    ll N = 1000001;
    ll sieve[N];
    sieve[0] = sieve[1] = 1;
    for(int i = 2; i < N; i++) sieve[i] = i;

    for(int i = 2; i*i <= N; i++){
        if(sieve[i] == i) {
            for(int j = i*i; j <=N; j +=i){
                if(sieve[j] == j)
                    sieve[j] = i;
            }
        }
    }
    return sieve;

}

//generate segmented sieve
ll* generateSegmentedSieve(ll l, ll h){
    ll N = h - l;
    ll* sieve = generateSieve();
    vector<ll> primes;
    //take all primes till sqrt(h) and store them in a vector
    for(int i = 2; i*i <= h; i++){
        if(sieve[i] == 1){
            primes.push_back(i);
        }
    }

}

int main(){
    FASTIO;
    int t;
    cin >> t;
    while(t--){
        ll base, n;
        cin >> base >> n;
        cout << power(base, n) << endl;
        cout << power(base, n, 1000000007) << endl;
    }
    return 0;
}