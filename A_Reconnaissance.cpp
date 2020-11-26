//https://codeforces.com/problemset/problem/32/A
#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(itr, start, end) for(auto itr = start; itr < end; itr++)
#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int n, d, i, j, countPairs = 0;
    cin >> n >> d;
    int soldiers[n];// = new int[n];
    REP(i, 0, n){
        cin >> soldiers[i];
    }
    if(n == 1){
        cout << 1;
        return 0;
    }
    sort(soldiers, soldiers+n);
    REP(i, 0, n-1){
        REP(j,i+1,n){
            if(abs(soldiers[i]-soldiers[j]) <= d)
                countPairs +=2;
            else
                break;
        }
    }
    cout << countPairs;
    return 0;
}