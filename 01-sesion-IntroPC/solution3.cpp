/*

Author : wils0n

github:https://github.com/wils0n

*/


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>
#include <bitset>
#include <set>
#include <map>
#include <iterator>


using namespace std;
#define ll long long
#define ull unsigned long long


int main(){

    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if (a < b) cout << "<";
        else if (a > b) cout << ">";
        else cout << "=";
        cout << endl;
    }

    return 0;
}

