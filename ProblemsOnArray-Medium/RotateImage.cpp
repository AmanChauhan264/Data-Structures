#include<bits/stdc++.h>
using namespace std;
void RotateImage(vector<vector<int>> &arr, int n){
    vector<vector<int>> ans(n, vector<int>(n));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            ans[j][n-1-i] = arr[i][j];
        }
    }
    cout<<"Rotate matrix is: ";
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<ans[i][j]<<" ";
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
    cout << "\nMatrix befor:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    RotateImage(arr, n);
}