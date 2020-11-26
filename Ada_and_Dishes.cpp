#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dishes[n];
        REP(i, 0, n){
            cin >> dishes[i];
        }
        sort(dishes, dishes+n, greater<int>());
        int minutes = 0;
        int i = 0;
        int j = 1;
        while( i < n && j < n){
            minutes += min(dishes[i], dishes[j]);
            if(abs(dishes[i]-dishes[j]) == 0) {
                i +=2; j +=2;
            } else {
                dishes[j] = abs(dishes[i]-dishes[j]);
                i++; j++;
            }
        }
        if(i == n-1) minutes+=dishes[i];
        cout << minutes << endl;
    }
    return 0;
}