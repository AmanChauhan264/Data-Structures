#include<bits/stdc++.h>
using namespace std;

int Capacity(vector<int>& arr, int value) {
    int sum = 0, count = 1;
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(sum + arr[i] > value) {
            count++;
            sum = 0;
        }
        sum += arr[i];
    }
    return count;
}

int ShipPackages(vector<int> &arr, int d){
        int total = 0;
        int maxi = 0;
        for(int i = 0; i < arr.size(); i++) {
            total += arr[i];
            maxi = max(maxi, arr[i]);
        }
        int low = maxi;
        int high = total;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            int count = Capacity(arr, mid);
            if(count <= d) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }

   
int main(){
    int n;
    cout<<"Enter number of packages: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter weights: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter maximum days to ship: ";
    cin>>d;
    int ans = ShipPackages(arr, d);
    cout<<"Least weight should be: "<<ans;
    return 0;
}