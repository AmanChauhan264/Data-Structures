#include<bits/stdc++.h>
using namespace std;

void Intersection(vector<int> &a, vector<int> &b, int n, int m){
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        }else if(b[j] < a[i]){
            j++;
        }else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    int size = ans.size();
    cout<<"Intersection is: ";
    for(int i = 0; i<size; i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n, m;
    cout<<"Enter size of first array: ";
    cin>>n;
    cout<<"Enter size of second array: ";
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout<<"Enter elements of first array: ";
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array: ";
    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }
    Intersection(arr1, arr2, n, m);
}