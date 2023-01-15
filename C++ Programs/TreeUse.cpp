#include<bits/stdc++.h>
#include"TreeNode.h"
#include<queue>
using namespace std;   
TreeNode<int>* takeInput()
{
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter number of children of root data"<<rootData<<endl;
    cin>>n;
    for(int i = 0;i<n; i++)
    {
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    } 
    return root;
} 
// TreeNode<int>* takeInputLevelWise()
// {
//    int rootData;
//    cout<<"Enter Data"<<endl;
//    cin>>rootData;
//    TreeNode<int>* root = new TreeNode<int>(rootData);
//    queue<TreeNode<int>*> pendingNodes;
//    pendingNodes.push(root);
//    while(pendingNodes.size()!=0)
//    {
//      TreeNode<int>* front = pendingNodes.front();
//      pendingNodes.pop();
//      cout<<"Enter number of children "<< front->data<<endl;
//      int numchild;
//      cin>>numchild;
//      for(int i = 0;i<numchild;i++)
//      {
//         int childdata;
//         cout<<"Enter"<<i<<"th child of"<<front->data <<endl;
//         cin>>childdata;
//         TreeNode<int>* child = new TreeNode<int>(childdata);
//         front->children.push_back(child);
//         pendingNodes.push(child);

//      }
//    }
// }  
int numNodes(TreeNode<int>* root)
{
    int ans = 1;
    for(int i = 0; i<root->children.size();i++)
    {
        ans+=numNodes(root->children[i]);
    }
    return ans;
}
// void max(TreeNode<int>* root)
// {
//     for(int i = 0;i<root->children.size();i++)
//     {
//         cout<<max_element(root->children);
//     } 
// }
void printTree(TreeNode<int>* root)
{   
    cout<<root->data<<":";
    for(int i = 0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    } 
    cout<<endl;
    for(int i = 0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    // TreeNode<int>*root = new TreeNode<int>(1);
    // TreeNode<int>*node1 = new TreeNode<int>(2);
    // TreeNode<int>*node2 = new TreeNode<int>(3);
    // TreeNode<int>*node3 = new TreeNode<int>(4);
    // TreeNode<int>*node4 = new TreeNode<int>(5);
    // TreeNode<int>*node5 = new TreeNode<int>(6);
    
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // node1->children.push_back(node3);
    // node1->children.push_back(node4);
    // node2->children.push_back(node5);

    TreeNode<int>* root = takeInput();
    numNodes(root); 
    printTree(root);
    max(root);  
     
}
