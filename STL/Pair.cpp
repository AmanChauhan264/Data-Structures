#include<bits/stdc++.h>
using namespace std;
void pairr(){
    pair<int, int> p = {1 , 3};
    cout << p.first << " "<<p.second;
    cout<<endl;

    pair<int, pair<int, int>> q = {3,{4,7}};
    cout << q.first <<" " << q.second.first <<" "<< q.second.second;
    cout<<endl;

    pair<int, int> arr[] = {{1,3}, {4,6}, {7,8}};
    cout<<arr[1].second<<" "<<arr[0].first;

}
int main(){
  pairr();
}