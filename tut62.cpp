#include <bits/stdc++.h>
using namespace std;



int main (void) {
    int n;  cin >> n;
    
    // dynamic array : 
    int *arr = new int [n];
    for (int i = 0 ; i < n; i ++) 
    {
        arr[i] = i;
        cout << arr[i];
    }

    // delete array
    delete[] arr;


    return 0;
}