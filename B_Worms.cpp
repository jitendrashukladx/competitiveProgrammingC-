#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define REP(i, start, end) for(auto i = start; i < end; i++)
//#define FORJ(start, end) for(auto j = start; j < end; j++)

int main(){
    FASTIO;
    int n;
    cin >> n;
    int arr[n];
    int dummy[n];
    int sum = 0;
    REP(i, 0, n) {
        cin >> arr[i];
        sum+=arr[i];
        dummy[i] = sum;
    }
    int q;
    cin >>q;
    while(q--){
        int low=0, high = n-1;
        int item;
        cin >> item;
        int ans;
        while(low <= high){
            int mid = low+ (high - low)/2;
            if(dummy[mid]>=item){
                ans = mid + 1;
                high = mid-1;
            }

            if(dummy[mid] < item)
                low = mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}