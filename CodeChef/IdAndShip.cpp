//https://www.codechef.com/submit/FLOW010
#include <iostream>
#include <string>
#include <cctype>
#include <map>
using namespace std;

int main(){
    int T;
    cin >> T;
    map<string, string> idMap;
    idMap["b"] = "BattleShip";
    idMap["c"] = "Cruiser";
    idMap["d"] = "Destroyer";
    idMap["f"] = "Frigate";
    while(T--){
        string id;
        cin >> id;
        id[0] = tolower(id[0]);
        cout<<idMap[id]<<endl;
    }
    return 0;
}

int func(){
    int T;
    cin >> T;
    
    while(T--){
        char id;
        cin >> id;
        if(tolower(id) == 'b')
            cout << "BattleShip\n";
        if(tolower(id) == 'c')
            cout << "Cruiser\n";
        if(tolower(id) == 'd')
            cout << "Destroyer\n";
        if(tolower(id) == 'f')
            cout << "Frigate\n";
    }
    return 0;
}