/*
Pattern 5
*****
****
***
**
*

*/

#include<iostream>
using namespace std;
void Pattern5(int n){
    for(int i = n; i > 0; i--){
        for( int j = n; j > n-i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Pattern5(n);
}