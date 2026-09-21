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

void postOrder(Node* root, vector<int>& ans){
    if(root == NULL) return;
    postOrder(root->left, ans);
    postOrder(root->right, ans);
    ans.push_back(root->data);
}

vector<int> getPostOrder(Node* root){
    vector<int> ans;
    postOrder(root, ans);
    return ans;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = getPostOrder(root);
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}