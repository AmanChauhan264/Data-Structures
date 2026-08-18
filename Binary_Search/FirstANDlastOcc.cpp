#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int>& arr, int key)
{
    int n = arr.size();
    int first = -1;
    int last = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return {first, last};
}
int main()
{   
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value: ";
    cin>>key;
    vector<int> ans = searchRange(arr, key);
    cout << "[" << ans[0] << ", " << ans[1] << "]";
    return 0;
}