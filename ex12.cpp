#include <bits/stdc++.h>
#include <map>

using namespace std;
 
bool arePermutation(string A, string B)
{

    if (A.length() != B.length())
        return false;

    map<char, int > hashA;
    map<char, int > hashB;

    for (int i = 0; i < A.length (); i++) {
        hashA[A[i]]++;
    }

    for (int i = 0; i < B.length (); i++) {
        hashB[B[i]]++;
    }

    bool flag  = true;

    for (auto i = hashA.begin(), j = hashB.begin(); i != hashA.end(), j != hashB.end(); i++, j++) {
        if (i->first != j->first || i->second != j->second) 
        {
            flag = false;
        }
    }
    
    return flag;
}

int main () {

    cout << arePermutation ("achyut", "akshat");

    return 0;
}