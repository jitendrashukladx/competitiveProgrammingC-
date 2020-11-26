//https://www.codechef.com/submit/FLOW009
#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        pair<int, int> price;
        cin >> price.first >> price.second;
        double totalExpense = price.first * price.second;
        double discount = 0;
        if(price.first > 1000)
            discount = (totalExpense*10)/100;
        printf("%f\n", totalExpense-discount);
    }
    return 0;
}