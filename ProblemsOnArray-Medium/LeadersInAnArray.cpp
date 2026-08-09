//    BRUTE FORCE SOLUTION

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> leaders(vector<int> &arr, int n){
//     vector<int> leaders;
//     for(int i = 0; i<n; i++){
//         int leader = true;
//         for(int j=i+1; j<n; j++){
//             if(arr[i] < arr[j]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader == true) leaders.push_back(arr[i]);
//     }
//    return leaders;
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
//    vector<int> ans =  leaders(arr, n);
//     cout<<"Leaders are: ";
//     for(int i = 0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
// }

//    Optimal solution - iterating from right side and comparing to the maximum

//   BRUTE FORCE SOLUTION

#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr, int n){
    vector<int> leaders;
    int max = arr[n-1];
    leaders.push_back(arr[n-1]);
    for(int i = n-1; i>=0; i--){
        if(arr[i] > max){
            leaders.push_back(arr[i]);
            max = arr[i];
        }
    }
   return leaders;
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
   vector<int> ans =  leaders(arr, n);
    cout<<"Leaders are: ";
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}