#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int day, int m, int k){
    int cnt = 0;
    int noOfB = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] <= day){
            cnt++;
        }else{
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}

int MinNoOfDaysToMakeMbouquets(vector<int> &arr, int r, int b){
    long long val = r * 1LL* b * 1LL;
    if(val > arr.size()) return -1;
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0; i<arr.size(); i++){
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    int low = mini, high = maxi;
    while(low <= high){
        int mid = (low + high) / 2;
        if(possible(arr, mid, r, b)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
   
int main(){
    int n;
    cout<<"Enter number of Flowers: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the time your flowers will take to bloom: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter number of bouquets you want: ";
    cin>>m;
    int k;
    cout<<"Enter min number of flowers in a bouquet: ";
    cin>>k;
    int ans = MinNoOfDaysToMakeMbouquets(arr, m, k);
    cout<<"Minimum days to make "<<m << " bouquets with atleast "<<k<<" flowers are: "<<ans;
    return 0;
}