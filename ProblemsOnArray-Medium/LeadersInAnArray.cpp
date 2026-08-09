#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr, int n){
    vector<int> leaders;
    for(int i = 0; i<n; i++){
        int leader = true;
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                leader = false;
                break;
            }
        }
        if(leader == true) leaders.push_back(arr[i]);
    }
    cout<<"Leaders are: ";
    for(int i = 0; i<leaders.size(); i++){
        cout<<leaders[i]<<" ";
    }
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
   vector<int> ans =  leaders(arr, n);
}