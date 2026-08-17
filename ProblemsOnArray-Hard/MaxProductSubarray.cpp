#include<bits/stdc++.h>
using namespace std;

int MaxProduct(vector<int> &nums){
    int n = nums.size();
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        int pr = 1;
        for(int j = i; j<n; j++){ 
            pr = pr * nums[j];
            maxi = max(maxi, pr); 
            }
    }
    return maxi;
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
    int ans = MaxProduct(arr);
    cout<<"Answer is: "<<ans;
}