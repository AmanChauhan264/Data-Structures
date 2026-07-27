#include<bits/stdc++.h>
using namespace std;

int RemoveDupicates(vector<int> &arr, int n){
  int i = 0;
  for(int j = 0; j<n; j++){
    if(arr[i]!=arr[j]){
        arr[i+1] = arr[j];
        i++;
    }
  }
  return i+1;
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
   int check = RemoveDupicates(arr, n);
   cout<<"Number of a perticular elements are: "<<check;
}