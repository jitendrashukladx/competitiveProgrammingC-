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
        int n, k;
        string fem;
        cin >> n >> k;
        cin >> fem;
        int i=0,j=0,ans=0,c=0, P;
        REP(l, 0, n) {
            if(fem[l] == 'M') {
                i = l;
                break;
            }
        }
        REP(l, 0, n) {
            if(fem[l] == 'I') {
                j = l;
                break;
            }
        }
        while(i < n && j < n){
            if(fem[i] == 'M'){
                if(fem[j] == 'I'){
                    REP(l, i+1, j){
                        if(fem[l] == ':') c++;
                    }
                    P = k + 1 - abs(i-j) - c;
                    if(P > 0){
                        ans++;
                        i++; j++; c=0;
                    } else if (P < 0) {
                        if(i > j) j++; 
                        else if (j > i) i++;
                    }
                } else if (fem[j] == 'X'){
                    j++; i = j;

                } else j++;
            } else if (fem[i] == 'X') {
                i++; j = i;
            }
            else i++;
        }
        cout << ans << endl;
    }
    return 0;
}