#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int> &arr, int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i+1;
        } 
    }
    return -1;
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
    int key;
    cout<<"Enter your key element: ";
    cin>>key;
    int ans = LinearSearch(arr, n, key);
    if(ans == -1){
        cout<<"Key element does not exists in the array.";
    }else{
        cout<<"Your key element is found at index: "<<ans;
    }
}
