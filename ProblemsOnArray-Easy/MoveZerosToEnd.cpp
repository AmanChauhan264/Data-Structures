#include<bits/stdc++.h>
using namespace std;

void MoveZeros(vector<int> &arr, int n){
    int j = 0;
    int temp = 0;
    for(int i = 0; i<n; i++){  
        if(arr[i] != 0){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }   
}

int main(){
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    MoveZeros(arr, n);
    cout<<"Final array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}