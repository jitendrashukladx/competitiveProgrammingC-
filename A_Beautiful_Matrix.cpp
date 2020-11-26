#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int mat[6][6];
    int dest = 3;
    int currL, currR;
    REP(i, 1, 6){
        REP(j, 1, 6){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                currL = i; currR = j;
            }
        }
    }
    cout << abs(dest - currL) + abs(dest - currR);
    return 0;
}