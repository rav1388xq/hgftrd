#include <bits/stdc++.h>
using namespace std;

void watchVideo (int* views) {
    *views += 1;

    return;
}

int main (void) {
    int views = 100;
    watchVideo (&views);

    cout << views << endl;

    return 0;
}