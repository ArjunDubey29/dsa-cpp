#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num == 0){
        cout << "Factorial of 0 is 0...";
    } else if(num == 1){
        cout << "Factorial of 1 is 1...";
    } else{
        int factorial = 1;
        while(num > 0){
            factorial *= num;
            num--;
    }
    cout << "The factorial is: " << factorial;
}
}