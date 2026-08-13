//     BRUTE FORCE SOLUTION 

// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> threeSum(vector<int> &arr, int n){
//     set<vector<int>> st;
//     for(int i = 0; i<n ;i++){
//         for(int j = i+1; j<n; j++){
//             for(int k = j+1; k<n; k++){
//                 if(arr[i] + arr[j] + arr[k] == 0){
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }

//    vector<vector<int>> ans(st.begin(), st.end());
//    return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter size of your array: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter elements: ";
//     for(int i = 0; i<n ;i++){
//         cin>>arr[i];
//     }
//    vector<vector<int>> ans  = threeSum(arr, n);
//    cout<<"Triplets are: ";
//    for(int i = 0; i < ans.size(); i++){
//     cout << "[ ";
//     for (int j = 0; j < ans[i].size(); j++) {
//         cout << ans[i][j] << " ";
//     }
//     cout << "]" << endl;
// }
// }

//            BETTER SOLUTION

//     BRUTE FORCE SOLUTION 

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr, int n){
    set<vector<int>> st;
    for(int i = 0; i<n ;i++){
        set<int> hashset;
        for(int j = i+1; j<n; j++){
            int third = -(arr[i]+arr[j]);
            if(hashset.find(third) != hashset.end()){
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
   vector<vector<int>> ans(st.begin(), st.end());
   return ans;
}

int main(){
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n ;i++){
        cin>>arr[i];
    }
   vector<vector<int>> ans  = threeSum(arr, n);
   cout<<"Triplets are: ";
   for(int i = 0; i < ans.size(); i++){
    cout << "[ ";
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << "]" << endl;
}
}