#include <bits/stdc++.h>
using namespace std;


// 2D dynamic array : 
/*

in dynamic array we consider a list of single arrays 

*/

int** createArray (int rows, int col) 
{
    int **arr = new int*[rows];

    // 2d array creation : 
    for (int i = 0; i < rows; i++) 
    {
        arr[i] = new int[col];
    }

    int value = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
}

int main (void) {
    


    return 0;
}