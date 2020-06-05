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

    int N, s = 0, c = 0;

    while(cin>>N){
        
        s = s + N;
        if (N == 0) {
            cout << s << " " << c << endl;
            break;
        }
        c = c + 1;
    }

    return 0;
}

