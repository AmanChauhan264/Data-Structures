//  BRUTE FORCE SOLUTION

#include<bits/stdc++.h>
using namespace std;

int ReversePairs(vector<int> &arr){
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n-1; j++){
            if(arr[i] > 2*arr[j]) cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = ReversePairs(arr);
    cout<<"Answer is: "<<ans;
}