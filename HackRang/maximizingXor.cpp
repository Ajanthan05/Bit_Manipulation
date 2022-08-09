#include <iostream>
#include <string>
using namespace std;

int maximizingXor(int l, int r) {
    int max_o = 0;
    for(int i=l; i<=r; i++) {
        for(int j=i; j<=r; j++) {
            //int xor_o = i ^ j;
            max_o = max(max_o,i^j);  //insted of if
//            if(xor_o>max_o) {
//                max_o = xor_o;
//            }


        }
    }
    return max_o;
}
int main() {
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    int res = maximizingXor(_l, _r);
    cout << res;

    return 0;
}
