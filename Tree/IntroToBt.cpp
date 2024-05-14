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

void Inordertraversing(Node *root)
{
    if(root==NULL)
        return;

    Inordertraversing(root->left);

    cout<< root->data <<" ";

    Inordertraversing(root->right);

    // cout<<root->data<<" ";
}

void Preordertraversing(Node *root)
{
    if(root==NULL)
        return;

    cout<< root->data <<" ";
    Preordertraversing(root->left);
    Preordertraversing(root->right);

    // cout<<root->data<<" ";
}

void Postordertraversing(Node *root)
{
    if(root==NULL)
        return;

    cout<< root->data <<" ";
    Postordertraversing(root->right);
    Postordertraversing(root->left);

    // cout<<root->data<<" ";
}
int main()
{

    struct Node* root=new Node(8);
    root->left= new Node(4);
    root->right= new Node(10);
    root->left->left= new Node(3);
    root->left->right= new Node(5);
    Inordertraversing(root);
    cout<<endl;
    Preordertraversing(root);
    cout<<endl;
    Postordertraversing(root);

}