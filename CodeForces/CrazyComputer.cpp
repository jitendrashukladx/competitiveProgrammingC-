//https://codeforces.com/problemset/problem/716/A
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
#define FORJ(start, end) for(auto j = start; j < end; j++)
#define vi vector<int>

int main(){
    FASTIO;
    int n, c;
    cin >> n >> c;
    vi t;
    FORI(0, n){
        int input;
        cin>>input;
        t.push_back(input);
    }
    if(t.size() == 1) {
        cout << 1;
        return 0;
    }

    int count =0;
    FORI(0, n-1){
        if(t[i+1] - t[i] <= c)
            count++;
        else count = 1;
    }
    cout << count << endl;
    return 0;
}