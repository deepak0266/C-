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
void Inordertraversing(Node *root)
{
    if(root==NULL)
        return;

    Inordertraversing(root->left);

    cout<< root->data <<" ";

    Inordertraversing(root->right);

}

void Preordertraversing(Node *root)
{
    if(root==NULL)
        return;

    cout<< root->data <<" ";
    Preordertraversing(root->left);
    Preordertraversing(root->right);

}

void Postordertraversing(Node *root)
{
    if(root==NULL)
        return;

    Postordertraversing(root->left);
    Postordertraversing(root->right);
    cout<< root->data <<" ";

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
    Inordertraversing(root);
    cout<<endl;
    Preordertraversing(root);
    cout<<endl;
    Postordertraversing(root);
    return 0;

}