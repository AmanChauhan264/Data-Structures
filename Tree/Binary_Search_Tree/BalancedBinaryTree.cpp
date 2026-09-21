#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

int dfsHeight(Node* root){
    if(root == NULL) return 0;
    int lh = dfsHeight(root->left);
    if(lh == -1) return  -1;
    int rh = dfsHeight(root->right);
    if(rh == -1) return  -1;
    if(abs(lh - rh) > 1) return -1;
    return max(lh, rh) + 1;
}
int isBalanced(Node* root){
    return dfsHeight(root) != -1;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);
    int ans = isBalanced(root);
    if(ans) cout<<"Yes it's a balanced binary tree!";
    else cout<<"No it's not a balanced binary tree";
    return 0;
}