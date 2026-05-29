/*
Pattern 3
1
12
123
1234
*/

#include<iostream>
using namespace std;
void Pattern3(int n){
       for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
       }
}
int main(){
    int n;
    cout<< "Enter the value of n : ";
    cin >> n;
    Pattern3(n);
}