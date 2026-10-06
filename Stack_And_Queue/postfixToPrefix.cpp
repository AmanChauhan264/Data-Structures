#include<bits/stdc++.h>
using namespace std;

string toPrefix(string s, int n){
    int i = 0;
    stack<string> st;
    while(i<n){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <='9')){
            st.push(string(1, s[i]));
        }else{
           string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string con = s[i] + t2 + t1 ;
            st.push(con);
        }
        i++;
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
    string ans = toPrefix(s, n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}