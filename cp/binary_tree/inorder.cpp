#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct node {
    int val;
    node *left;
    node * right;
    node (int x) {
        val = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int u, int v, char c) {
    if (c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c) {
    if (root == NULL) return;
    if (root->val == u) {
        makeRoot(root, u, v, c);
    }
    else {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

void inorder(node *root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}


void preorder(node *root) {
    if (root == NULL) return;
    cout << root->val << " ";   
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int count(node *root) {
    if (root == NULL) return 0;
    if (root->left == NULL and root->right == NULL) return 1;
    return count(root->left) + count(root->right);
}


int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    node *root = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int u, v;
        char c;
        cin >> u >> v >> c;
        if (root == NULL) {
            root = new node(u);
            makeRoot(root, u, v, c);
        }
        else {
            insertNode(root, u, v, c);
        }
    }
    inorder(root);
    return 0;
}