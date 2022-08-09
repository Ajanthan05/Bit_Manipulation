#include <iostream>
#include <string>
using namespace std;

string counterGame(long n) {
    int re, i = 0;
    while(n>=1) {
        n = n/2;
        //cout<<n<<"\n";
        i++;
    }
    if((i-1)%2==1) {
        return "Louise";
    } else {
        return "Richard";
    }

}

int main() {
    long v;
    cin >> v;

    string res = counterGame(v);
    cout << res;

    return 0;
}
