#include <bits/stdc++.h>
using namespace std;
// Program to find if a given number is odd or even . 


int main (void) {
    
    int x;  cin >> x;

    if (x & 1)  cout << "Odd";
    else    cout << "Even;";

    return 0;
}