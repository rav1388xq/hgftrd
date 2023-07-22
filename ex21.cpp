#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<string , int> &a, const pair<string , int> &b)
{
    return (a.second < b.second);
}

vector<pair<string, int> > sortFruits(vector<pair<string, int>> &v, string S)
{
    // your code  goes here

    if (S == "price")
    {
        sort(v.begin(), v.end(), sortbysec);
    }
    else
    {
        sort(v.begin(), v.end());
    }

    return v;
}

int main()
{

    vector<pair<string, int>> v = {

        {"Mango", 100}, {"Guava", 70}, {"Grapes", 40}, {"Apple", 60}, {"Banana", 30}

    };

    sortFruits(v, "price");
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " "
             << it->second << endl;
    };
}