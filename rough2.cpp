#include <bits/stdc++.h>
using namespace std;


// fibonacci sequence : 

int main (void) {
    
    int n;
    cin >> n;

    int f = 0;
    int s = 1;

    while (n) 
    {
        int nxt = f + s;

        if (n == 1) cout << nxt;
        f = s;
        s = nxt;
        n -= 1;
    }

    return 0;
}