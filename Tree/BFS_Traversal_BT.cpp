#include<queue>
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
void BFS(Node *root)
{
    if(root==NULL)
        return ;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *current=q.front();
        cout<<current->data<<" ";
        q.pop();
        if(current->left!=NULL)
            q.push(current->left);

        if(current->right!=NULL)
            q.push(current->right);
    }
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

    cout << "BFS traversal of the binary tree: ";
    BFS(root);
    cout<<endl;
    return 0;
}