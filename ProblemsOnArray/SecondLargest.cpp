#include<bits/stdc++.h>
using namespace std;

int SecondLargestElement(vector<int> &arr, int n){
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    int secondlargest = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
 
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
     int SecondLargest =  SecondLargestElement(arr, n);
     cout<<"Second Largest Element is: "<< SecondLargest;
    return 0;
}