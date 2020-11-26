#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define arrayInput(n, arr) for(int i = 0; i < n; i++) cin >> arr[i]
//#define printArr(n, arr) for (int i = 0; i < n; i++) cout << arr[i]
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int n;
    cin >> n;
    int teams[n][2];
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> teams[i][0] >> teams[i][1];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            if(teams[i][0] == teams[j][1])
                ans++;
        }
    }
    cout << ans;
    return 0;
}