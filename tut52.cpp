#include <bits/stdc++.h>
using namespace std;

// stair case search : 
// each row and column must be sorted .

pair <int , int > staircaseSearch (int arr[][4], int m, int n, int key) {

    int i = 0;
    int j = m - 1;

    while (i <= n - 1  and j >= 0 ) {
        if (arr[i][j] == key) {
            return {i, j};
        }
        else if (arr[i][j] > key) {
            j--;
        }
        else {
            i++;
        }
    }


    return {-1, -1};
}

int main (void) {
    
    int arr[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int m = 4, n = 4;
    pair <int , int > coord = staircaseSearch (arr, m, n, 33);
    cout << coord.first << " " << coord.second;

    return 0;
}