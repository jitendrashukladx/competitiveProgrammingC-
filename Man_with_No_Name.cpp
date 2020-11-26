#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int T;
    cin >>T;
    while(T--){
        int N;
        cin >> N;
        int cities[N];
        int sum = 0;
        FORI(0, N){
            cin >>cities[i];
            if(cities[i] < 0) {
                cities[i] = sum/i;
            }
            sum+=cities[i];
        }
        FORI(0, N){
            cout <<cities[i] << " ";
        }
        cout <<endl;
    }
    
    return 0;
}