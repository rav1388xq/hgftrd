#include <bits/stdc++.h>
using namespace std;


int main (void) {
    
    char number [][10] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "hundred"
    };


    for (int i = 0; i < 6; i++) {     // not applicable for integer array since cout is written differently for character array conditionally
        cout << number[i] << endl;
    }

    return 0;
}