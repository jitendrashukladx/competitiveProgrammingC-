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
        int array[n];
        int even = 2;
        REP(i, 0, n){
            array[i] = even;
        }
        REP(i, 0, n){
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}