#include <bits/stdc++.h>
using namespace std;

// de refernce operator (*): 

int main (void) {
    int x = 5;
    // cout << *x;
    int * xptr = &x;

    cout << * xptr;
    
    int* p = 0;
    // we cannot de reference a null pointer 


    return 0;
}