//inserting elemeent in beginning of linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
  int data;
  node*link;
} *head,*temp,*store;
node *create_new_node(int);
void insert(node*);
void display(node*);
int main()
{
  head=NULL;
  int n,x;
  cout<<"enter the number of element"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"enter a number: ";
    cin>>x;
    store=create_new_node(x);
    insert(store);
    display(head);
  }
}
node *create_new_node(int n)
{
  temp=new node;
  temp->data=n;
  temp->link=NULL;
  return temp;
}
void insert(node* store)
{
  node *save;
  if(head==NULL)
  {
    head=store;
  }
  else
  {
    save=head;
    head=store;
    store->link=save;

  }

}
void display(node* head)
{
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head=head->link;
  }
  cout<<"\n";
}
