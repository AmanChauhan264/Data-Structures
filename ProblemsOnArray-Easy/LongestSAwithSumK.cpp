// Longest subarray with sum k
#include<bits/stdc++.h>
using namespace std;

int LongestSubarray(vector<int> arr, long long k){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i  = 0; i<arr.size(); i++){
        sum += arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
        int len = i - preSumMap[rem];
        maxLen = max(maxLen, len);
    }
    if(preSumMap.find(sum) == preSumMap.end()){
        preSumMap[sum] = i;
    }
    }
    return maxLen;
}

int main(){
    int n ;
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
  int ans = LongestSubarray(arr, k);
  cout<<"Longest subarray with sum k is: "<<ans;
}