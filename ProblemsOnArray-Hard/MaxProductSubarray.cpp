//     BETTER THAN BRUTE

// #include<bits/stdc++.h>
// using namespace std;

// int MaxProduct(vector<int> &nums){
//     int n = nums.size();
//     int maxi = INT_MIN;
//     for(int i = 0; i<n; i++){
//         int pr = 1;
//         for(int j = i; j<n; j++){ 
//             pr = pr * nums[j];
//             maxi = max(maxi, pr); 
//             }
//     }
//     return maxi;
// }

// int main(){
//     int n;
//     cout<<"Enter size of your array: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter elements: ";
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     int ans = MaxProduct(arr);
//     cout<<"Answer is: "<<ans;
// }

//   OPTIMAL SOLUTION 

#include<bits/stdc++.h>
using namespace std;

int MaxProduct(vector<int> &nums){
    int pre = 1, suff = 1;
    int ans = INT_MIN;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        if(pre ==0) pre = 1;
        if(suff ==0) suff = 1;

        pre = pre * nums[i];
        suff = suff * nums[n-i-1];
        ans = max(ans, max(pre, suff));
    }
    return ans;
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