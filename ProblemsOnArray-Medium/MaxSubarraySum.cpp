// -------  Kadane's Algorithm -------------------------->
// #include <bits/stdc++.h>
// using namespace std;
// int kadane(vector<int> &arr){
//     int sum = 0;
//     int n = arr.size();
//     int max = INT_MIN;
//     for(int i = 0;i < n; i++){
//         sum = sum+arr[i];
//         if(sum>max){
//             max = sum;
//         }
//         if(sum<0){
//             sum = 0;
//         }
//     }
//     return max;
// }
// int main() {
//     int n;
//     cout << "Enter size of the array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int ans = kadane(arr);
//     cout<<"Maximum subarray sum is "<<ans;
// }

// --------------- Returning subarray instead of sum -------------------------->

// -------  Kadane's Algorithm -------------------------->
#include <bits/stdc++.h>
using namespace std;
 pair<int, int> kadane(vector<int> &arr){
    int sum = 0;
    int start = 0;
    int n = arr.size();
    int max = INT_MIN;
    int ansStart = -1, ansEnd = -1;
    for(int i = 0;i < n; i++){
        if(sum == 0) start = i;
        sum = sum+arr[i];
        if(sum>max){
            max = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return {ansStart, ansEnd};
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
     pair<int, int>  ans = kadane(arr);
    cout<<"Maximum sum subarray is: "<<" {";
    for(int i = ans.first; i <= ans.second; i++){
        cout<<arr[i]<<","<<" ";
    }
    cout<<"}";
}