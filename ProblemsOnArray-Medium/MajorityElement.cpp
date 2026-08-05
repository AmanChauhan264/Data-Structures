#include<bits/stdc++.h>
using namespace std;

int majority(vector<int> &arr, int n){
    map<int , int> mpp;
    for(int i = 0 ; i < n; i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = majority(arr, n);
    if(ans == -1) cout<<"Majority element does not exists.";
    else cout<<"Majority element is: "<<ans;
}