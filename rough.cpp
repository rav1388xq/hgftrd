#include <bits/stdc++.h>
using namespace std;


// two sum problem : 
pair <int, int > twoSum (int arr[], int n, int sum) 
{
    pair <int , int > ans;

    sort (arr, arr + n);
    int l = 0;
    int r = n - 1;

    while (l < r) {
        if (arr[l] + arr[r] == sum )
        {
            ans.first = arr[l];
            ans.second = arr[r];
            return ans;
        }
        else if (arr[l] + arr[r] < sum)
        {
            l++;
        }
        else r--;
    }


    return {-1, -1};
}

int main (void) {
    int arr[] = {1, 2, 5, 3, -3};
    int n = 5;
    int sum = 0;

    pair <int, int > value = twoSum (arr, n, sum);

    cout << value.first << " " << value.second;


    return 0;
}