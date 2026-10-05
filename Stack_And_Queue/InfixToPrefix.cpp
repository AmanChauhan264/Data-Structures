#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){
    string s1 = "";
    for(int i = s.size()-1; i>=0; i--){
        if(s[i] == '('){
            s[i] = ')';
        }else if(s[i] == ')'){
            s[i] = '(';
        }
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
    while(i < n){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            ans += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }  
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(s[i] == '^'){
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans = ans + st.top();
                    st.pop();
                }
            }
            else{
                while(!st.empty() && priority(s[i]) < priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    ans = reverseString(ans);
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