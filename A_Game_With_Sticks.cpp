#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int n, m;
    int moves;
    cin >> n >> m;
    while(n > 0 && m > 0){
        moves++; n--; m--;
    }
    if(moves%2 == 0){
        cout << "Malvika";
    } else {
        cout << "Akshat";
    }
    
    return 0;
}