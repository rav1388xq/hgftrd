#include <bits/stdc++.h>
using namespace std;

// reference variables in C++
// pass objects by reference 

int main (void) {
    
    int x = 5;
    int &y = x;

    y++;
    cout << x << y << endl;;

    return 0;
}