#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long highestPowerOf2(long n) {

    long res=0;
    for(int i=n; i>=1; i--) {
        if( (i&(i-1)) == 0) {
            res = i;
            break;
        }
    }
return res;
}
string counterGame(long n) {
    int i;

    if(floor(log2(n))==ceil(log2(n))) {
        i=0;
        while(n>=1) {
        n = n/2;
        //cout<<n<<"\n";
        i++;
        }
    } else {
        int su = n-highestPowerOf2(n);
         i=1;
        while(su>=1) {
        su = su/2;
        //cout<<n<<"\n";
        i++;
        }
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


long res=0;
    for(int i=n; i>=1; i--) {
        if( (i&(i-1)) == 0) {
            res = i;
            break;
        }
    }
return res;
}
string counterGame(long n) {
    long i =0;

    if(floor(log2(n))==ceil(log2(n))) {
        while(n>=1) {
        n = n/2;
        //cout<<n<<"\n";
        i++;
        }
    } else {

        while(n>=1) {
            n = n-highestPowerOf2(n);
            if(floor(log2(n))==ceil(log2(n))) {
                n = n/2;
                i++;
            }else {

            }
            i=1;
             su = su/2;
            //cout<<n<<"\n";
            i++;
        }
    }
    if(i%2==0) {
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
