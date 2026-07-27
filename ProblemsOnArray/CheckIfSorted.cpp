#include<bits/stdc++.h>
using namespace std;

int IfSorted(vector<int> &arr, int n){
    for(int i = 0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n ;
    cout<<"Enter size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   int check = IfSorted(arr, n);
   if(check){
    cout<<"Array is sorted";
   }else{
    cout<<"Array is not sorted";
   }
}