#include<bits/stdc++.h>
using namespace std;

int KthNumber(vector<int> &arr, int k){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        if(arr[i] <= k) k++;
        else break;
    }
    return k;
}

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the Kth number: ";
    cin>>k;
    int ans = KthNumber(arr, k);
    cout<<"Answer is: "<<ans;
    return 0;
}