// ------ BRUTE FORCE SOLUTION ------------->

// #include<bits/stdc++.h>
// using namespace std;
// void RotateImage(vector<vector<int>> &arr, int n){
//     vector<vector<int>> ans(n, vector<int>(n));
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             ans[j][n-1-i] = arr[i][j];
//         }
//     }
//     cout<<"Rotate matrix is: ";
//     cout<<endl;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main() {
//     int n, m;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     cout << "Enter number of columns: ";
//     cin >> m;
//     vector<vector<int>> arr(n, vector<int>(m));
//     cout << "Enter elements of the matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "\nMatrix befor:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     RotateImage(arr, n);
// }

// --------------- OPTIMAL SOLUTION ----------------------------->

// ------ BRUTE FORCE SOLUTION ------------->

#include<bits/stdc++.h>
using namespace std;
void RotateImage(vector<vector<int>> &arr, int n){
  
        for(int i = 0; i<=n-2; i++){
        for(int j = i+1; j<=n-1; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i<n; i++){
    reverse(arr[i].begin(), arr[i].end());
    }
    
    cout<<"Rotate matrix is: ";
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "\nMatrix before:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    RotateImage(arr, n);
}

