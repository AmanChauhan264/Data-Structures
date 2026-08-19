#include<bits/stdc++.h>
using namespace std;

int SearchInRotated2(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target) return true;

        if(arr[low] == arr[mid] && arr[high] == arr[mid]){
            low++;
            high--;
            continue;
        }

        if(arr[low] <= arr[mid]){
            if(arr[low] <= target && arr[mid] >= target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid] <= target && arr[high] >= target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter rotated sorted array with distinct elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    int ans = SearchInRotated2(arr, target);
    if(false) {
        cout<<"Elements does'nt exists in the array!";
    }
    else {
        cout<<"Element is present in the array.";
    }
    return 0;
}