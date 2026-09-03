#include<bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> &stalls, int dist, int cows){
    int cntCows = 1, last = stalls[0];
    for(int i = 0; i<stalls.size(); i++){
        if(stalls[i] - last >= dist){
            cntCows++;
            last = stalls[i];
        }
        if(cntCows >= cows) return true;
    }
    return false;
}

    int AggressiveCows(vector<int>& stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();
        int low = 1, high = stalls[n-1] - stalls[0];
        while(low<=high){
            int mid = (low + high) / 2;
            if(canWePlace(stalls, mid, k) == true) low = mid + 1;
            else high = mid - 1;
        }
        return high;
    }

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number of cows: ";
    cin>>k;
    int ans = AggressiveCows(arr, k);
    cout<<"Answer is: "<<ans;
    return 0;
}