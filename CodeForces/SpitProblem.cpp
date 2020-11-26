//https://codeforces.com/problemset/problem/29/A
#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define FORI(start, end) for(auto i = start; i < end; i++)
#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int n;
    scanf("%d", &n);
    vector<pair<int,int>> dims;
    FORI(0,n){
        pair<int, int> input;
        scanf("%d %d", &input.first, &input.second);
        dims.push_back(input);
    }
    FORI(dims.begin(), dims.end()){
        FORJ(dims.begin()+1, dims.end()){
            if(i->first + i->second == j->first && j->first + j->second == i->first){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}