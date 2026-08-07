#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n, 0);
    int pos = 0, neg = 1;
    for(int i = 0; i<n ; i++){
        if(arr[i] < 0){
            ans[neg] = arr[i];
            neg += 2;
        }
        else{
            ans[pos] = arr[i];
            pos += 2;
        }
    }
    return ans;
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
   vector<int> ans =  rearrangeArray(arr);
   cout<<"Rearranged array is: ";
   for (int i = 0 ;i<n ; i++){
    cout<<ans[i]<<" ";
   }
}