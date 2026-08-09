//  BRUTE FORCE SOLUTION

// #include<bits/stdc++.h>
// using namespace std;

// bool ls(vector<int> &arr, int num){
//     int n = arr.size();
//     for(int i = 0; i < n; i++){
//         if(arr[i] == num){
//             return true;
//         }
//     }
//     return false;
// }

// void longestConsecutive(vector<int> &arr){
//     int n = arr.size();
//     int longest = 1;
//     int count = 0;
//     int x;
//     for(int i = 0; i<n; i++){
//         x = arr[i];
//         count = 1;
//         while(ls(arr, x+1) == true){
//             x = x + 1;
//             count = count+1;
//         }
//         if(longest<count) longest = count;
//     }
//     cout<<"Answer is: "<<longest;
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
//     longestConsecutive(arr);
// }

//  Optimal solution

//  BRUTE FORCE SOLUTION

#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &arr){
    int n = arr.size();
    if(n==0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i = 0; i<n; i++){
        st.insert(arr[i]);
    }
    for(auto it: st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
   
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
    int ans = longestConsecutive(arr);
    cout<<"Answer is: "<<ans;
}