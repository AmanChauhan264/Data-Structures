//  Sort an array with just 0s, 1s, 2s
#include<bits/stdc++.h>
using namespace std;

void Sort012(vector<int> &arr, int n){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0) count0++;
        if(arr[i] == 1) count1++;
        if(arr[i] == 2) count2++;
    }
    for(int i = 0; i<count0; i++) arr[i] = 0;
    for(int i = count0; i<count0 + count1; i++) arr[i] = 1;
    for(int i = count0+count1; i<n; i++) arr[i] = 2;\   
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
    Sort012(arr, n);
    cout<<"Sorted array is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}