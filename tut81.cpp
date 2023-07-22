// clear last5 i bits from a number : 

#include <bits/stdc++.h>
using namespace std;

void clearLastIBits (int &n, int &i) {
    int mask = (-1 << i);
    n = n & mask;

    return ;
}

int main (void) {
    int n; cin >> n;
    int i; cin >> i;


    clearLastIBits (n, i);
    cout << n;


    return 0;
}