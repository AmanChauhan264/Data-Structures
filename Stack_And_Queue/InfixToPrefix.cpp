#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){
    string s1 = "";
    for(int i = s.size()-1; i>=0; i--){
        s1 += s[i];
    }
    return s1;
}

int priority(char op){
    if(op == '^')
        return 3;
    if(op == '*' || op == '/')
        return 2;
    if(op == '+' || op == '-')
        return 1;

    return 0;
}


string toPrefix(string s, int n){
    int i = 0;
    stack<char> st;
    string ans ="";
    s = reverseString(s);


    return ans;
}

int main(){
    int n;
    cout<<"Enter length of your string: ";
    cin>>n;
    char s[n];
    cout<<"Enter infix expression: ";
    cin >> s;
    string ans = "";
    ans = toPrefix(s, n);
    cout<<"Prefix expression will be: ";
    for(int i = 0; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}