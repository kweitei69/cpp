#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if (n<=1)
       { return false;}
    for (int j=2; j<=n/2; j++){
        if (n % j == 0){
            return false;
        }
        return true;
    }
    return 0;
}

int twinprime(int n1, int n2){
    return (prime(n1) && prime(n2) && abs(n1 - n2) == 2);
}


int main()
{
    int arr[15]={3,101,96,47,41,7,65,9,13,5,79,45,30,11,43};
    for (int i=0; i<=15; i++){
        if (twinprime(arr[i]) == true ){
            cout << "(" << arr[i] << ")" << ",";
        }   
    }
    return 0;
}

