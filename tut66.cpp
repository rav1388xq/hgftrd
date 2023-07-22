// #include <bits/stdc++.h>
// using namespace std;

// int main (void) {
    
//     vector<int> arr = {1, 2, 3, 4, 5, 6};

//     cout << arr.size();
//     cout << endl;
//     cout << arr.capacity();


//     return 0;
// }
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int > arr(10, 7);
    
    for (auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}