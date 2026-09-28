#include<bits/stdc++.h>
using namespace std;

class ImpleStack{
    public:
    int topIndex = -1, st[10];

    void push(int n){
        if(topIndex >= 10) cout<<"Stack is full";
        else{
            topIndex = topIndex + 1;
            st[topIndex] = n;
        }
    }

    void pop(){
        if(topIndex == -1){
            cout<<"Stack is empty cannot perform pop operation!";
        }else{
            topIndex = topIndex - 1;
        }
    }

    int top(){
        if(topIndex == -1) cout<<"Stack is empty!";
        else return st[topIndex];
    }

    int size(){
        return topIndex + 1;
    }

};

int main(){
    ImpleStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"Top: "<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    return 0;
}