#include <bits/stdc++.h>
using namespace std;

void clearIthBit (int &n, int i) {
    int mask = ~(i << i);

    n = (n & mask);
    return ;
}

void updateIthBit (int &n, int i, int val ) {
    clearIthBit (n, i);

    if (val) {
        int mask = (1 << i);
        n = (n | mask);
        return ;
    }
   
    return ;

}

int main (void) {
    
    // update ith bit : clear that bit and update the 
    // bit in case of one and leave it as it is if zero
    int n;
    cin >> n;
    int i ;
    cin >> i;
    updateIthBit (n, i, 0);

    cout << n;


    return 0;
}