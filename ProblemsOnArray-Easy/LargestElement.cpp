#include<bits/stdc++.h>
using namespace std;

int LargestElement(vector<int> &arr, int n){
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ", n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
     int Largest =  LargestElement(arr, n);
     cout<<"Largest Element is: "<< Largest;
    return 0;
}