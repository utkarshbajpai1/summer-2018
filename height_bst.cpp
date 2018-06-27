#include<bits/stdc++.h>
#include <cstddef>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef double d;
/*bool compare(string &s1,string &s2)  // sort for multiple strings
{return s1.size() < s2.size();// sort(arr, arr+n, compare);}*/

struct node{
    int data;
    node* left;
    node* right;
};

int find_height(node* root){
    if(root == NULL){
        return -1;
    }

    return max(find_height(root->left), find_height(root->right)) + 1;
}

node* createNewNode(int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

node* insert_newNode(node* root, int data){
    if(root == NULL){
        root = createNewNode(data);
    }else if(data <= root->data){
        root->left = insert_newNode(root->left, data);
    }else {
        root->right = insert_newNode(root->right, data);
    }
    return root;
}

int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    node* root = NULL;
    root = insert_newNode(root, 15);
    root = insert_newNode(root, 10);
    root = insert_newNode(root, 20);
    root = insert_newNode(root, 25);
    root = insert_newNode(root, 5);
    root = insert_newNode(root, 30);

    cout<<find_height(root);
return 0;
}
