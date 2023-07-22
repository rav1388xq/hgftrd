// pass by reference : 

#include <bits/stdc++.h>
using namespace std;

// pass by refernce : 
void applyTax (float &income) 
{
    float tax = 0.10;
    income = (1 - tax) * income;

    return ;
}

int main (void) {
    
    float income = 1000.0;

    applyTax (income);
    cout << income;

    return 0;
}