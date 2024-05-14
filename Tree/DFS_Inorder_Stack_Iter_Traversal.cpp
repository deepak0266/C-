#include<stack>
#include<vector>
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
vector<int> Inorder(Node *root)
{
    vector<int> result;

    if(root==NULL)
        return result;
    stack<Node *> s;
    
    Node *curr=root;

    while(true)
    {
        if(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }

        else
        {
            if(s.empty()==true)
            break;
            curr=s.top();
            result.push_back(curr->data);
            s.pop();
            curr=curr->right;
        }
    }
    return result;
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

    cout << "INORDER Iterative Stack traversal of the binary tree: ";
    vector<int>res=Inorder(root);

    for(int i:res)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}