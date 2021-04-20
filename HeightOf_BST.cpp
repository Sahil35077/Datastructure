//height of binary tree
#include<iostream>
using namespace std;
struct BStNode
{
  int data;
  BStNode*left;
  BStNode*right;
};
BStNode* GetNode(int data)
{
  BStNode* newNode=new BStNode();
  newNode->data=data;
  newNode->left=newNode->right=NULL;
  return newNode;
}
BStNode* insert(BStNode*root,int data)
{
  if(root== NULL)
  {
    root=GetNode(data);
  }
  else if(data <= root->data)
  {
    root->left=insert(root->left,data);
  }
  else
  {
    root->right=insert(root->right,data);
  }
  return root;
}
int max(int left,int right)
{
  int res=(left>right)?left:right;
  return res;
}
int findHeight(BStNode*root)
{
  if(root==NULL) return -1;
  return max(findHeight(root->left),findHeight(root->right))+1;
}
int main()
{
  BStNode* root=NULL;
  root=insert(root,45);root=insert(root,9);root=insert(root,65);root=insert(root,45);
  root=insert(root,4);root=insert(root,41);root=insert(root,10);root=insert(root,99);root=insert(root,21);
  cout<<"height of tree \n";
  cout<<"height is:: "<<findHeight(root);
}
