#include<bits/stdc++.h>
using namespace std;

string toPostfix(string s, int n){
    int i = n-1;
    stack<string> st;
    while(i>=0){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <='9')){
            st.push(string(1, s[i]));
        }else{
           string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            st.push( t1 + t2 + s[i]);
        }
        i--;
    }
    return st.top();
}

int main(){
    cout<<"Enter length of the expression: ";
    int n;
    cin>>n;
    char s[n];
    cout<<"Enter the expression: ";
    cin>>s;
    string ans = toPostfix(s, n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}