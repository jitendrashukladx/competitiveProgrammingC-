#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int n;
    cin >> n;
    int arr[n+1];
    REP(i, 1, n+1){
        int x;
        cin >> x;
        arr[x] = i;
    }
    REP(i, 1, n+1)
        cout << arr[i] << " ";
    return 0;
}