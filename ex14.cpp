#include <bits/stdc++.h>


using namespace std;

string removeDuplicate (string s) {
    // to remove the duplicate characters from a string 
    map <char, int > hash ;

    for (int i = 0; i < s.length(); i++) {
        hash[s[i]] ++;
    }

    string ans = "";

    for (auto it : hash) {
        ans += it.first;
    }


    return ans ;
}

int main () {

    // cout << "Hello World !" << endl;
    cout << removeDuplicate ("geeksforgeeks");

    return 0;
}