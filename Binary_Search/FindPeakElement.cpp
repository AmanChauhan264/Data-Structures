#include<bits/stdc++.h>
using namespace std;

int PeakElement(vector<int> &arr){
   int n = arr.size();
   if(arr[0] > arr[1]) return arr[0];
   if(arr[n-1] > arr[n-2]) return arr[n-1];
   int low = 1, high = n-2;
   while(low <= high){
    int mid = (low + high) / 2;
    if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) {
        return arr[mid];
    }
    else if(arr[mid] > arr[mid-1]){
         low = mid + 1;
        }
    else {
        high = mid - 1;
    }
   }
   return -1;
}
   
int main(){
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array with altleast 1 peak element: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = PeakElement(arr);
    cout<<"Peak element is: "<<ans;
    return 0;
}