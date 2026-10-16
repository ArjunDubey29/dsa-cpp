#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n < 2) return false;
    else{
        for(int i = 2; i < sqrt(n); i++){
            if(n % 2 == 0) return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(isPrime(n)){
        cout << "The number is a Prime number.";
    } else {
        cout << "The number is not a Prime number.";
    }
}