#include<bits/stdc++.h>
using namespace std;

int SingleElement(vector<int> &arr, int n){
    int xorr = 0;
    for(int i = 0; i<n; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main(){
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = SingleElement(arr, n);
    cout<<"Answer is: "<<ans;
}