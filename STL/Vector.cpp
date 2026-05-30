#include<bits/stdc++.h>
using namespace std;
void vectorr(){
    vector<int> v;
    v.push_back(1);    // pushes an element
    v.emplace_back(2);  // increase size by one and push element  

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1,2);

    vector<int> v2(5, 100);   // {100, 100, 100, 100, 100}
    vector<int> v3(5); // {0, 0, 0, 0, 0} or any 5 garbage values depending on the compiler
    vector<int> v4(5, 10);  // // {10, 10, 10, 10, 10}
    vector<int> v5(v4);  // {10, 10, 10, 10, 10}
    
}
int main(){
    vectorr();
}