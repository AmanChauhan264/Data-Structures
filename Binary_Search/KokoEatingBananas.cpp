#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr){
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &arr, int hourly){
    int totalH = 0;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        totalH += ceil((double)arr[i] / (double)hourly);
    }
    return totalH;
}

int KokoEatingBananas(vector<int> &arr, int h){
    int low = 1, high = findMax(arr);
    while(low <= high){
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(arr, mid);
        if(totalH <= h){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low;
}
   
int main(){
    int n;
    cout<<"Enter number of piles: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter number of bananas in each pile: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int h;
    cout<<"Enter time limit: ";
    cin>>h;
    int ans = KokoEatingBananas(arr, h);
    cout<<"Minimum bananas/hour are: "<<ans;
    return 0;
}