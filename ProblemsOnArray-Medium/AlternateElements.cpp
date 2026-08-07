#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &a){
    vector<int> pos,neg;
    int n =  a.size();
    for(int i = 0 ; i<n ; i++){
        if(a[i] > 0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    if(pos.size() > neg.size()){
        for(int i= 0; i<neg.size(); i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i = neg.size(); i<pos.size(); i++){
            a[index] = pos[i];
            index++;
        }
    }else{
        for(int i = 0; i<pos.size(); i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index = pos.size()*2;
        for(int i = pos.size(); i<neg.size(); i++){
            a[index] = neg[i];
            index++;
        }
    }
    return a;
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