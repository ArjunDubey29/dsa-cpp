#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>&arr){
    if(arr.size() == 1) return;
    else{
        int left = 0;
        int right = arr.size() - 1;
        while(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverseArray(arr);
    for(int x: arr){
        cout << x << " ";
    }
}