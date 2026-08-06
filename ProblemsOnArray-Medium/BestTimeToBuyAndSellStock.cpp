#include <bits/stdc++.h>
using namespace std;
int Stock(vector<int> &arr){
    int mini = arr[0];
    int maxprofit = 0;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        int cost = arr[i] - mini;
        maxprofit = max(maxprofit, cost);
        mini= min(mini, arr[i]);
    }
    return maxprofit;
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
    int ans = Stock(arr);
    cout<<"Best time is: "<<ans;
  }


