#include<bits/stdc++.h>
using namespace std;

int HowManyTimeArrayBeenRotated(vector<int> &arr, int n){
   int low = 0, high = n-1;
   int index = -1;
   int ans = INT_MAX;
   while(low <= high){
    int mid = (low + high) / 2;
    if(arr[low] <= arr[high]){
        if(arr[low] < ans){
            index = low;
            ans = arr[low];
        }
        break;
    }
    if(arr[low] <= arr[mid]){
        if(arr[low] < ans){
            ans = arr[low];
        }
        low = mid+1;
    }
        else{
            high = mid - 1;
            if(arr[mid] < ans){
                ans = arr[mid];
            }
        }
    }
    return index;
   }
   
int main(){
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter rotated sorted array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = HowManyTimeArrayBeenRotated(arr, n);
    cout<<"Array has been rotated "<<ans<<" times";
    return 0;
}