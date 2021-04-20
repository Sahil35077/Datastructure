//level order traversal of binary search tree
#include<iostream>
#include<queue>
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
void LevelOrder(BStNode*root)
{
  if(root==NULL) return;
  queue<BStNode*>Q;
  Q.push(root);
  while(!Q.empty())
  {
    BStNode*current=Q.front();
    cout<<current->data<<" ";
    if(current->left!=NULL) Q.push(current->left);
    if(current->right!=NULL) Q.push(current->right);
    Q.pop();
  }

}
int main()
{
  BStNode* root=NULL;
  root=insert(root,45);root=insert(root,9);root=insert(root,65);root=insert(root,43);
  root=insert(root,4);root=insert(root,41);root=insert(root,10);root=insert(root,99);root=insert(root,21);
  LevelOrder(root);

}
