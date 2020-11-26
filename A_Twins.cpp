#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int n;
    cin >> n;
    int coins[n];
    int totalSum = 0;
    FORI(0,n){
        cin >> coins[i];
        totalSum+=coins[i];
    }
    sort(coins, coins+n, greater<int>());
    int sum = coins[0];
    FORI(1, n+1){
        if(sum > totalSum-sum){
            cout << i;
            break;
        } else {
            sum +=coins[i];
        }
    }
    return 0;
}