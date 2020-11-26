//https://codeforces.com/problemset/problem/712/A
#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)

int main(){
    FASTIO;
    int n;
    scanf("%d", &n);
    int *nums = new int[n];
    int *a = new int[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for(int i = 0; i < n-1; i++)
        a[i] = nums[i] + nums[i+1];
    a[n-1] = nums[n-1];
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
