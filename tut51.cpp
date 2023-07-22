#include <bits/stdc++.h>
using namespace std;

// spiral print of a 2D matrix 

void print (int arr[][4], int n, int m) {
    int startRow = 0;
    int endRow = n - 1;
    int startColumn = 0;
    int endColumn = m - 1;


    // outer loop 
    while (startColumn <= endColumn and startRow <= endRow) {
        // start row : 

        for (int col = startColumn; col <= endColumn; col++) {
            cout << arr[startRow][col];
            cout << " ";
        }

        // end column : 

        for (int row = startRow + 1 ; row <= endRow; row++) {
            cout << arr[row][endColumn];
            cout << " ";
        }

        // end row : 

        for (int col = endColumn - 1; col >= startColumn; col--) {

            if (startRow == endRow) {
                break; 
            }
            cout << arr[endRow][col];
            cout << " ";

        }

        // start column : 

        for (int row = endRow - 1; row >= startRow + 1; row--) {

            if (startColumn == endColumn) {
                break;
            }
            cout << arr[row][startColumn];
            cout << " ";

        }

        startRow++;
        endRow--;
        startColumn++;
        endColumn--;
    }



    return ;
}

int main (void) {
    
    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4, m = 4;

    print (arr, m, n);

    return 0;
}