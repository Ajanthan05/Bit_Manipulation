#include <bits/stdc++.h>

using namespace std;

long flippingBits(long &n) {
    for(int i = 0; i <32; i++)
        n ^= 1u << i;
    return n;
}
int main() {
    ofstream fout(getenv("Ou"));
    long n;
    int q;
    cin>>q;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<n<<endl;
}
