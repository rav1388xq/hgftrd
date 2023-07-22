#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (void) {

    vector <int > arr = {1, 2, 3, 2, 3, 5};
    int key = 3;

    vector <int> ::iterator it = find (arr.begin(), arr.end(), key); // linear search in c++
    cout << it - arr.begin();
    

    return 0;
}