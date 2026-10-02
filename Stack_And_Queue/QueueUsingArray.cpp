#include<bits/stdc++.h>
using namespace std;

class Impleq{
    public:
    int start = -1, end = -1, size = 10, q[10], currsize = 0;
    
    void push(int n){
        if(currsize == size){
            cout<<"Queue is full!";
            return;
        }if(currsize == 0){
            start = end = 0;
        }else{
            end = (end + 1) % size;
        }
        q[end] = n, currsize++;
    }

    void pop(){
        if(currsize == 0){
            cout<<"Queue is already empty!";
        }        
        if(currsize == 1){
            start = end = -1;
            currsize--;
        }else{
            start = (start + 1) % size;
            currsize--;
        }
    }

    int top(){
        if(currsize == 0){
            cout<<"Queue has no top because it is empty!";
            return -1;
        }
        return q[start];
    }
    
    int getsize(){
        return currsize;
    }
};

int main(){
    Impleq q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    cout<<"Top: "<<q.top()<<" "<<endl;

    cout<<"size: "<<q.getsize()<<endl;
    
    q.pop();
    q.pop();
    q.pop();

    cout<<"Top: "<<q.top()<<" "<<endl;

    cout<<"size: "<<q.getsize()<<endl;

    return 0;
}