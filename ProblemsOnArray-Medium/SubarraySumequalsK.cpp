// Longest subarray with sum k
#include<bits/stdc++.h>
using namespace std;

    int subarraySum(vector<int>& arr, int k) {
        map<int, int> mpp;
        mpp[0] = 1;
        int preSum = 0, cnt = 0;
        for(int i = 0; i<arr.size(); i++){
            preSum += arr[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        return cnt;
    }

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter value of k: ";
    cin>>k;
  int ans = subarraySum(arr, k);
  cout<<"Number of subarray with sum equals to k: "<<ans;
}