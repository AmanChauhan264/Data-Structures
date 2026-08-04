#include<bits/stdc++.h>
using namespace std;

int SecondLargestElement(vector<int> &arr, int n){
    int largest = arr[0];
    int secondlargest = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest=arr[i];
        }else if(arr[i] < largest && arr[i] > secondlargest){
            secondlargest = arr[i];
        }
    }
   
    return secondlargest;
 
}

int SecondSmallest(vector<int> &arr, int n){
     int smallest = arr[0];
    int secondsmallest = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i] < smallest){
            secondsmallest = smallest;
            smallest=arr[i];
        }else if(arr[i] != smallest && arr[i] < secondsmallest){
            secondsmallest = arr[i];
        }
    }
   
    return secondsmallest;
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
     int Secondsmallest = SecondSmallest(arr, n);
     cout<<"Second Largest Element is: "<< SecondLargest <<'\n';    
     cout<<"Second smallest Element is: "<< Secondsmallest ;
    return 0;
}