#include<bits/stdc++.h>
using namespace std;
struct Node
{
   int data;
   struct Node* left;
   struct Node* right;

   Node(int val)
   {
    data = val;
    left  = NULL;
    right = NULL;
   }
}; 
int search(inOrder,start,end,curr)
{
    for(int i = start;i<end;i++)
    {
        if(inOrder[i]==curr)
        {
            return i;
        }
    } 
    return -1;
}
 
Node* buildTree(int preOrder[],int inOrder[],int start,int end)
{
    static int idx = 0;
    if(start>end)
    {
        return NULL;
    }
    int curr = preOrder[idx];
    idx++;
    Node *node = new Node(curr);
    if(start==end)
    {
        return node;
    }
    int pos = search(inOrder,start,end,curr);
    node->left = buildTree(preOrder,inOrder,start,pos-1);
    node->right = buildTree(preOrder,inOrder,pos+1,end);
}
void inOrder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    } 
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main()
{
    int preOrder[] = {1,2,3,4,5};
    int inOrder[] = {4,2,1,5,3};
    Node* root = buildTree(preOrder,inOrder,0,4);
    inOrder(root);

    return 0;
}