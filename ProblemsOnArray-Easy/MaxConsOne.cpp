#include<bits/stdc++.h>
using namespace std;

int MaxConsOne(vector<int> &arr, int n){
    int count = 0;
    int max = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 1){
            count++;
            if(count > max){
                max++;
            }
        }else{
            count = 0;
        }
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements (0, 1): ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = MaxConsOne(arr, n);
    cout<<"Maximum consecutive ones are: "<<ans;
}