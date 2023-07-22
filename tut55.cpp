#include <bits/stdc++.h>
using namespace std;

// pointers and addresses in C++
// variable that holds the address of another variable 

int main (void) {

    int a = 5;
    int* p = &a;

    cout << p;    

    int x = 5;
    int * xptr; 
    xptr = &x;   // assignment 

    int * y = &x; // initialisation 

    return 0;
}