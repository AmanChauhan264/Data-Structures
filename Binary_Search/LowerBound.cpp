//  stl for this ->  lb = lower_bound(arr.begin(), arr.end(), n);  this will return an iterator pointing to that index

#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &arr, int k){
    int n = arr.size();
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] >= k){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n, k;
    cout<<"Enter the sixe of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter your value: ";
    cin>>k;
    int ans = lower_bound(arr, k);
    cout<<"Lower bound is: "<<ans;
}