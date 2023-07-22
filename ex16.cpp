#include <iostream>
#include <string>
#include<cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    int n = s.length() - 1;
    int ans = 0;
    int exp = 0;

    while (n >= 0) {
        int num = int (s[n]) - 48;
        int toAdd = num * pow (2, exp);
        n--;
        exp++;

        ans += toAdd;
    }

    return ans ;
}
 
int main () {
    string s;
    cin >> s;

    cout << binaryToDecimal (s);


    return 0;
}