//  Sort an array with just 0s, 1s, 2s

// #include<bits/stdc++.h>
// using namespace std;

// void Sort012(vector<int> &arr, int n){
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] == 0) count0++;
//         if(arr[i] == 1) count1++;
//         if(arr[i] == 2) count2++;
//     }
//     for(int i = 0; i<count0; i++) arr[i] = 0;
//     for(int i = count0; i<count0 + count1; i++) arr[i] = 1;
//     for(int i = count0+count1; i<n; i++) arr[i] = 2;\   
// }

// int main() {
//     int n;
//     cout << "Enter size of the array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     Sort012(arr, n);
//     cout<<"Sorted array is: ";
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// --------------- Dutch National Flag Algorithm ------------------------>

//  Rules:-

// [0____low-1]  --> 0
// [low_____mid-1]  --> 1
// [high+1______n-1]  --> 2

#include<bits/stdc++.h>
using namespace std;

void DutchSort(vector<int> &arr, int n){
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
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
    DutchSort(arr, n);
    cout<<"Sorted array is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
