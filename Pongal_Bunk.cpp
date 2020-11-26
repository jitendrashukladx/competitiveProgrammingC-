#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int N, Q;
    cin >> N >> Q;   
    int arr[N+1] = {0};
    int dummy[N+2] = {0};
    //dummy[1] = 1;
    int l, r;
    while(Q--) {
        cin >> l >>r;
        arr[l] +=1; arr[r+1] -=1;
        dummy[r+1] -= (r-l+1);
    }
    //cout <<"after while\n";
    REP(i, 1, N+1)
        arr[i] += arr[i-1];
    //cout <<"after arr prefixSum\n";
    REP(i, 1, N+1)
        dummy[i]+=dummy[i-1]+arr[i];
    //cout <<"after dummy prefixSum\n";
    cin >>Q;
    while (Q--){
        cin >> l;
        cout << dummy[l] <<endl;
    }    
    return 0;
}