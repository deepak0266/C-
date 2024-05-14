#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void insert(Node *&root,int data)
{
    if(root==NULL)
    {
        root = new Node(data);
        return;
    }

    if(data<root->data)
        insert(root->left,data);
    else if(data>root->data)
        insert(root->right,data);
}
void in(Node *root)
{
    if(root==NULL)
        return;
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}

void pre(Node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}
void post(Node *root)
{
    if(root==NULL)
        return;
    post(root->left);
    post(root->right);
    cout<<root->data<<" ";
}
int main()
{

    struct Node* root=NULL;
    insert(root,9);
    insert(root,4);
    insert(root,3);
    insert(root,6);
    insert(root,8);
    insert(root,21);
    insert(root,1);
    insert(root,289);

    cout << "Inorder traversal of the binary tree: ";
    in(root);
    cout<<endl;
    cout << "Preorder traversal of the binary tree: ";
    pre(root);
    cout<<endl;
    cout << "Postorder traversal of the binary tree: ";
    post(root);
    cout<<endl;
    return 0;
}