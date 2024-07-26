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

vector<int> Postorder(Node *root)
{
    vector<int> result;

    if(root==NULL)
        return result;
    
    stack<Node *> s1;
    stack<Node *> s2;

    s1.push(root);
    while(!s1.empty())
    {
        
        Node *current=s1.top();

        s1.pop();

        // result.push_back(current->data);

        s2.push(current);
        if(current->left!=NULL)
            s1.push(current->left);


        if(current->right!=NULL)
            s1.push(current->right);

    }

    while(!s2.empty())
    {
        Node *current=s2.top();
        result.push_back(current->data);
        s2.pop();
    }


    return result;

}

vector<int> Inorder(Node *root)
{
   
    vector<int> result;
    stack <Node * > st;
    Node * curr=root;

    if (root==NULL)
    return result;

    while(true)
    {
        if(curr!=NULL)
        {
            st.push(curr);
            curr=curr->left;
        }
        else
        {
            if(st.empty()==true)
            break;
            curr=st.top();
            st.pop();
            result.push_back(curr->data);
            curr=curr->right;
        }
    }
    return result;

}

vector<int> Preorder(Node *root)
{
    vector<int> result;
    if(root==NULL)
        return result;
    stack<Node *> s;
        s.push(root);
    while(!s.empty())
    {
        
        Node *current=s.top();
        // cout<<current->data<<" ";
        result.push_back(current->data);
        s.pop();
        if(current->right!=NULL)
            s.push(current->right);
        if(current->left!=NULL)
            s.push(current->left);

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

    cout << "POSTORDER Iterative Stack traversal of the binary tree: ";
    vector<int>res1=Postorder(root);
    
    for(int i:res1)
        cout<<i<<" ";
    cout<<endl;
    

    cout << "INORDER Iterative Stack traversal of the binary tree: ";
    vector<int>res2=Inorder(root);

    for(int i:res2)
        cout<<i<<" ";
    cout<<endl;
    
    
    cout << "PREORDER Iterative Stack traversal of the binary tree: ";
    vector<int>res3=Preorder(root);

    for(int i:res3)
        cout<<i<<" ";
    cout<<endl;
    


    return 0;
}