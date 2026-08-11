#include<bits/stdc++.h>
using namespace std;

vector<int> Spiral(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector<int> ans;
    while(left <= right && top <= bottom){
        for(int i = left; i <= right; i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "\nMatrix before:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    vector<int> ans = Spiral(arr);
    cout << "\nSpiral order:\n";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}