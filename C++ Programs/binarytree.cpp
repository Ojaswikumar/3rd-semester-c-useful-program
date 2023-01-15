#include<bits/stdc++.h>
#include<queue>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
   
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preOrder(struct node* root)
{  
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
} 
void inOrder(struct node* root)
{
    if(root==NULL)
    {
        return;
    } 
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(struct node* root)
{
    if(root==NULL)
    {
        return;
    } 
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void printLevelOrder(node* root)
{
    if(root==NULL)
    {
        return;
    } 
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* k = q.front();
        q.pop();
        if(k!=NULL)
        {
            cout<<k->data<<" ";
            if(k->left)
             k.push(k->left);
            if(k->right)
             k.push(k->right);
        } 
        else (!q.empty())
          q.push(NULL);
    } 
}    
int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    
    printLevelOrder(root);


    // preOrder(root);
    // cout<<endl;
    // inOrder(root);
    // cout<<endl;
    // postOrder(root);


   return 0; 
}