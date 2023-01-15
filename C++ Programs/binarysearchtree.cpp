#include<bits/stdc++.h>
//ASSIGNMENT 8 QUESTION 1
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

node* inserBST(node* root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    } 
    if(val<root->data)
    {
        root->left = inserBST(root->left,val);
    } 
    else
    {
        root->right = inserBST(root->right,val);
    } 
    return root;
} 

int main()
{
    node* root = NULL;
    root = inserBST(root,5);
    inserBST(root,1);
    inserBST(root,3);
    inserBST(root,4);
    inserBST(root,2);
    inserBST(root,7);  

    inOrder(root);
    cout<<endl;
    // printLevelOrder(root);
    return 0;  




}  
// void printLevelOrder(node* root)
// {
//     if(root==NULL)
//     {
//         return;
//     } 
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty())
//     {
//         node* k = q.front();
//         q.pop();
//         if(k!=NULL)
//         {
//             cout<<k->data<" ";
//             if(k->left)
//              k.push(k->left);
//             if(k->right)
//              k.push(k->right);
//         }
//     } 
//     else if(!q.empty())
//     {
//         q.push(NULL);
//     }
// }