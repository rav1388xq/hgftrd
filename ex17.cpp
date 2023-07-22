#include <bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    int startRow = 0;
    int endRow = m - 1;
    int startColumn = 0;
    int endColumn = n - 1;

    int toggle = 1;

    vector <int > ans;

    while (endColumn >= 0)
    {

        if (toggle > 0)
        {
            for (int row = startRow; row <= endRow; row++)
            {
                ans.push_back(arr[row][endColumn]);
                cout << " ";
            }
            toggle *= -1;
        }
        else
        {
            for (int row = endRow; row >= startRow; row--)
            {
                ans.push_back(arr[row][endColumn]);
                cout << " ";
            }
            toggle *= -1;
        }

        endColumn -= 1;
    }

    // for (auto it : ans ) {
    //     cout << it  << " ";
    // }

    return ans;
}

int main(void)
{

    vector <vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    WavePrint (4, 4, mat);

    return 0;
}