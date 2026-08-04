// #include<bits/stdc++.h>
// using namespace std;

// string sum2(int n, vector<int> arr, int target){
//     int left = 0, right = n-1;
//     sort(arr.begin(), arr.end());
//     while(left<right){
//         int sum = arr[left] + arr[right];
//         if(sum == target){
//             return "YES";
//         }
//         else if(sum < target) left++;
//         else right--;
//     }
//     return "NO";
// }

// int main(){
//     int n ;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter elements of the array: ";
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter target: ";
//     cin>>target;
//     string ans = sum2(n, arr, target);
//     cout<<"Answer is "<<ans;
// }

// -----------Hash map solution -------------------------->

#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }
        mp[arr[i]] = i;
    }
    return {-1, -1};
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
    int target;
    cout << "Enter target: ";
    cin >> target;
    pair<int, int> ans = twoSum(arr, target);
    if (ans.first != -1) {
        cout << "Indexes are: " << ans.first << " and " << ans.second;
    } else {
        cout << "No pair found";
    }
    return 0;
}