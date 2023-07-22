#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    // your code goes here
    
    int n = S.length();

    string  ans = "";
    for (int i = 0; i < n; i++) {
        if (S[i] == 'a' ||S[i] == 'e' ||S[i] == 'i' ||S[i] == 'o' ||S[i] == 'u') {
            ans += S[i];
        }
    }

    return ans ; 
    
} 

int main () {
    cout << vowel("aenjfdeioudsbca") << endl;


    return 0;
}