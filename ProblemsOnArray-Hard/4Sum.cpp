#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> FourSum(vector<int> &arr, int n, int q){
    set<vector<int>> st;
    for(int i = 0; i<n ;i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                for(int l = k+1; l<n; l++){
                if(arr[i] + arr[j] + arr[k] + arr[l] == q){
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
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
    int k;
    cout<<"Enter value of k: ";
    cin>>k;
   vector<vector<int>> ans  = FourSum(arr, n, k);
   cout<<"Quadriplets are: ";
   for(int i = 0; i < ans.size(); i++){
    cout << "[ ";
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << "]" << endl;
}
}