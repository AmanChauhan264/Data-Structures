#include<bits/stdc++.h>
using namespace std;

int LeftRotate(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i = 0; i<n-1 ; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    cout<<"Left rotated array is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    LeftRotate(arr, n);     
}