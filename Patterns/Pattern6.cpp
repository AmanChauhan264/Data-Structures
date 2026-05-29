/*
Pattern 6
12345
1234
123
12
1

*/

#include<iostream>
using namespace std;
void Pattern6(int n){
       for(int i = n; i > 0; i--){
        for( int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Pattern6(n);
}