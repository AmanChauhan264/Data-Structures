/*
Pattern 4
1
22
333
4444
55555
*/

#include<iostream>
using namespace std;
void Pattern4(int n){
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    Pattern4(n);
}