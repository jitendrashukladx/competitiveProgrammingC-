#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)
bool isLucky(int temp){
    int digits =0, count = 0;
    while (temp != 0){
        if(temp%10 == 4 || temp %10 == 7) count++;
        digits++;
        temp = temp/10;
    }
    //cout << "digits = " << digits <<"count =  " <<count;
    if(digits == count ) return true;
    else return false;
}
int main(){
    FASTIO;
    int n;
    cin >> n;
    int temp = n, digits = 0, count= 0;
    if(isLucky(n)){
        cout <<"YES";
        return 0;
    }
    REP(i, 2, n){
        if(n % i == 0  && isLucky(i)){
            cout <<"YES";
            return 0;
        }
    }
    cout<<"NO";
    
    return 0;
}