#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> MergeIntervals(vector<vector<int>> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i = 0; i<n; i++){
        int start = arr[i][0];
        int end = arr[i][1];
        if(!ans.empty() && end<=ans.back()[1]){
            continue;
        }
        for(int j = i+1; j<n; j++){
            if(arr[j][0] <= end){
                end = max(end, arr[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start, end});
    }
    return ans;
}

int main(){
    int n, m = 1;
    cout<<"Enter number of rows: ";
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(2));
    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Intervals are: ";
    vector<vector<int>> ans = MergeIntervals(arr);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}