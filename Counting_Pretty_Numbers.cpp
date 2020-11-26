#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int T;
    cin  >> T;
    while(T--){
        int good[1000000];
        int l, r;
        cin >> l >> r;
        FORI(1, 1000000) {
            int lastDigit = i %10;
            if(lastDigit == 2 || lastDigit == 3 || lastDigit == 9)
                good[i] = 1;
            else good[i] = 0;
        }
        int sum = 0;
        FORI(1, 1000000) {
            good[i] +=good[i-1];
        }
        cout << good[r] - good[l-1] <<endl;

    }
    return 0;
}