// #include<bits/stdc++.h>
// using namespace std;

// int majority(vector<int> &arr, int n){
//     map<int , int> mpp;
//     for(int i = 0 ; i < n; i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it: mpp){
//         if(it.second>n/2){
//             return it.first;
//         }
//     }
//     return -1;
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
//     int ans = majority(arr, n);
//     if(ans == -1) cout<<"Majority element does not exists.";
//     else cout<<"Majority element is: "<<ans;
// }

// -------- Moore's voting algorithm --------------->

#include<bits/stdc++.h>
using namespace std;

int moore(vector<int> &arr){
    int cnt = 0;
    int el;
    for(int i = 0; i<arr.size(); i++){
        if(cnt==0){
            cnt = 1;
            el = arr[i];
        }else if(arr[i] == 0){
            cnt++;
        }else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == el) cnt1++;
    }
    if(cnt1 > arr.size()/2) return el;
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
   int ans =  moore(arr);
    if(ans == -1) cout<<"Majority element does not exists.";
    else cout<<"Majority element is: "<<ans;
}