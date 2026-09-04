#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Inorder traversal: Left -> Root -> Right
void inOrder(Node* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }

    // Traverse left subtree
    inOrder(root->left, ans);

    // Store root
    ans.push_back(root->data);

    // Traverse right subtree
    inOrder(root->right, ans);
}

// Function to return inorder traversal
vector<int> getInOrder(Node* root) {
    vector<int> ans;

    inOrder(root, ans);

    return ans;
}

int main() {

    // Create the BST
    Node* root = new Node(4);

    root->left = new Node(2);
    root->right = new Node(6);

    root->left->left = new Node(1);
    root->left->right = new Node(3);

    root->right->left = new Node(5);
    root->right->right = new Node(7);

    // Get inorder traversal
    vector<int> result = getInOrder(root);

    // Print result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}