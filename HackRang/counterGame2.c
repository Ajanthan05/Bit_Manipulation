#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long highestPowerOf2(long n) {
    for(int i=n; i>=1; i--) {
        if( (i&(i-1)) == 0) {
            int res = i;
            break;
        }
    }
return res;
}
string counterGame(long n) {

    if(floor(log2(n))==ceil(log2(n))) {
        int i=0;
        while(n>=1) {
        n = n/2;
        //cout<<n<<"\n";
        i++;
    } else {
        int su = n-highestPowerOf2(n);
        int i=1;
        while(su>=1) {
        n = n/2;
        //cout<<n<<"\n";
        i++;
    }
    if((i-1)%2==1) {
        return "Louise";
    } else {
        return "Richard";
    }

    // int re, i = 0;
    // while(n>=1) {
    //     n = n/2;
    //     //cout<<n<<"\n";
    //     i++;
    // }
    // if((i-1)%2==1) {
    //     return "Louise";
    // } else {
    //     return "Richard";
    // }

}
int main() {
    long v;
    cin >> v;

    string res = counterGame(v);
    cout << res;

    return 0;
}
