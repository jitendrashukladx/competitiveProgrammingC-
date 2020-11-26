#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    long long n, k;
    cin >> n >> k;
    long long l = -1, h = n+1;
    while(h-l > 1){
        long long m = (h+l)/2;
        long long val = (n-m)*(n-m+1)/2 - m;
        if(val == k){
            h = m;
            break;
        }
        if( val > k)
            l = m;
        else
            h = m;
    }
    cout << h;
    return 0;
} 