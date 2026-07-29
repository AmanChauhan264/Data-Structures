// ---------------Brute force approach using set and temp array --------------->

// #include<bits/stdc++.h>
// using namespace std;

// void Union(vector<int> &arr1, vector<int> &arr2, int n, int m){
//     set<int> st;
//     for(int i = 0; i<n; i++){
//         st.insert(arr1[i]);
//     }
//     for(int i = 0; i<m; i++){
//         st.insert(arr2[i]);
//     }
//     vector<int> temp;
//     for(auto it : st){
//         temp.push_back(it);
//     }
//     int size = temp.size();
//     cout<<"Union is: ";
//     for(int i = 0; i<size; i++){
//         cout<<temp[i]<<" ";
//     }
// }

// int main(){
//     int n, m;
//     cout<<"Enter size of first array: ";
//     cin>>n;
//     cout<<"Enter size of second array: ";
//     cin>>m;
//     vector<int> arr1(n);
//     vector<int> arr2(m);
//     cout<<"Enter elements of first array: ";
//     for(int i = 0; i<n; i++){
//         cin>>arr1[i];
//     }
//     cout<<"Enter elements of second array: ";
//     for(int i = 0; i<m; i++){
//         cin>>arr2[i];
//     }
//     Union(arr1, arr2, n, m);
// }

//-------------------Optimized two pointer approach --------------->

#include<bits/stdc++.h>
using namespace std;

int Union(vector<int> &arr1, vector<int> &arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            } 
            i++;
         }
         else{
             if(unionArr.size()==0 || unionArr.back() != arr1[j]){
                unionArr.push_back(arr2[j]);
            } 
            j++;
         }
    }
    while(j<n2){
         if(unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            } 
            j++;
    }
    while(i<n1){
         if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            } 
            i++;
    }
    int size = unionArr.size();
    cout<<"Union is: ";
   for(int i = 0;i<size; i++){
    cout<<unionArr[i]<<" ";
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
    Union(arr1, arr2);
}