#include<bits/stdc++.h>
using namespace std;

int ByD(vector<int> &arr, int n, int d){
    vector<int> temp(d);
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }
    int j = 0;
    for(int i = n - d ; i<n; i++){
        arr[i] = temp[j];
        j++;
    }
    cout<<"Left rotated array by D elements is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,d;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value by which you wants to rotate the array: ";
    cin>>d;
    d = d%n;
    ByD(arr, n, d);
}