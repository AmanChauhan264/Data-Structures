// -------  Kadane's Algorithm -------------------------->
#include <bits/stdc++.h>
using namespace std;
int kadane(vector<int> &arr){
    int sum = 0;
    int n = arr.size();
    int max = INT_MIN;
    for(int i = 0;i < n; i++){
        sum = sum+arr[i];
        if(sum>max){
            max = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return max;
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
    int ans = kadane(arr);
    cout<<"Maximum subarray sum is "<<ans;
}