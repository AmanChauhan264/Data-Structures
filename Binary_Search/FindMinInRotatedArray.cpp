#include<bits/stdc++.h>
using namespace std;

int MinInRotatedSorted(vector<int> &arr, int n){
   int low = 0, high = n-1;
   int ans = INT_MAX;

   while(low <= high){
    int mid = (low + high) / 2;

    if(arr[low] <= arr[high]){
        ans = min(ans, arr[low]);
        break;
    }

    if(arr[low] <= arr[mid]){
        ans = min(ans, arr[low]);
        low = mid + 1;
    }else{
        high = mid - 1;
        ans = min(ans, arr[mid]);
    }
   }
   return ans;
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
    int ans = MinInRotatedSorted(arr, n);
    cout<<"Minimum element is: "<<ans;
    return 0;
}