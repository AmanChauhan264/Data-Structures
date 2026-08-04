#include<bits/stdc++.h>
using namespace std;

string sum2(int n, vector<int> arr, int target){
    int left = 0, right = n-1;
    sort(arr.begin(), arr.end());
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target) left++;
        else right--;
    }
    return "NO";
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
    int target;
    cout<<"Enter target: ";
    cin>>target;
    string ans = sum2(n, arr, target);
    cout<<"Answer is "<<ans;
}