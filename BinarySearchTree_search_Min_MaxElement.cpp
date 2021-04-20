//finding minimum element and mwximum element in tree using recursion
#include<iostream>
using namespace std;
struct BStNode
{
  int data;
  BStNode* left;
  BStNode* right;
};
BStNode* Getnode(int data)
{
  BStNode*newNode=new BStNode();
  newNode->data=data;
  newNode->left=newNode->right=NULL;
  return newNode;
}
BStNode* insert(BStNode*root,int data)
{
  if(root==NULL)
  {
    root=Getnode(data);
  }
  else if(data <=root->data)
  {
    root->left=insert(root->left,data);
  }
  else
  {
    root->right=insert(root->right,data);
  }
  return root;
}

bool search(BStNode* root,int data)
{
  if(root==NULL) return false;
  else if(root->data=data) return true;
  else if(data <= root->data) return search(root->left,data);
  else return search(root->right,data);
}
int findMin(BStNode*root)
{
  if(root==NULL)
  {
    cout<<"tree is empty\n";
    return -1;
  }
  else if(root->left==NULL)
  {
    return root->data;
  }
  return findMin(root->left);
}
int findMax(BStNode*root)
{
  if(root==NULL)
  {
    cout<<"tree is empty\n";
    return -1;
  }
  else if(root->right==NULL)
  {
    return root->data;
  }
  return findMax(root->right);
}
int main()
{
  BStNode* root=NULL;
  root=insert(root,45);root=insert(root,9);root=insert(root,65);root=insert(root,45);
  root=insert(root,4);root=insert(root,41);root=insert(root,10);root=insert(root,99);root=insert(root,21);
  int num;
  cout<<"enter no to search:: ";
  cin>>num;
  if(search(root,num)==true) cout<<"element found ";
  else cout<<"Not Found\n";
  cout<<"min is:: "<<findMin(root);
  cout<<"\n";
  cout<<"max is:: "<<findMax(root);
}
