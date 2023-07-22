#include <bits/stdc++.h>
using namespace std;

void pascalTriangle (int n) {

    // int arr[n + 1][n + 1] = {0};
    int arr[n + 1][n + 1];
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++)
        {
            // arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            arr[i][j] = 0;
        }
    }
    
    arr[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    
    
    // print statement : 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j] != 0)
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    return ;
}

int main (void) {
    int n = 5;
    pascalTriangle (n);


    return 0;
}