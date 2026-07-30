// This solution is better than brute but not the best because there will be space complexity of O(n) as we used hash. Better solution is below this code.

#include<bits/stdc++.h>
using namespace std;

int Missing(vector<int> &arr, int n){
    int hash[n+1] = {0};
    for(int i = 0;i < n ; i++){
        hash[arr[i]] = 1;
    }
    for(int i = 1; i<n ; i++){
        if(hash[i]==0)
        return i;
    }
}

int main(){
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n-1 ; i++){
        cin>>arr[i];
    }
   int ans =  Missing(arr, n);
   cout<<"Missing number is: "<<ans;
   
}