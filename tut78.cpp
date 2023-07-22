#include <bits/stdc++.h>
using namespace std;

// Setting the i th bit 
void clearIthBit (int &n, int i) {
    int mask = ~(i << i);

    n = (n & mask);
    return ;
}

int main (void) {
    
    int n = 81;
    int i = 3;

    clearIthBit (n, i);
    cout << n;

    return 0;
}