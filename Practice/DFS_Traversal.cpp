#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
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
        root=new Node(data);
        return;
    }
    if(data<root->data)
        insert(root->left,data);
    else
        insert(root->right,data);
}
void Preorder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";

    Preorder(root->left);

    Preorder(root->right);

}
void Postorder(Node* root)
{
    if(root==NULL)
        return;
    Postorder(root->left);

    Postorder(root->right);

    cout<<root->data<<" ";

}
void Inorder(Node* root)
{
    if(root==NULL)
        return;
    Inorder(root->left);

    cout<<root->data<<" ";

    Inorder(root->right);

}
int main()
{
    Node *root=NULL;
    insert(root,88);
    insert(root,878);
    insert(root,884);
    insert(root,288);
    insert(root,68);
    insert(root,18);
    insert(root,38);
    insert(root,48);

    cout<<"Inorder::";Inorder(root);
    cout<<endl<<endl;
    cout<<"Preorder::";Preorder(root);
    cout<<endl<<endl;
    cout<<"Postorder";Postorder(root);
    cout<<endl<<endl;
}