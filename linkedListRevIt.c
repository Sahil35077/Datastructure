//reversing linked list using iterative method
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
}*last;
struct node*head;
void insert(int x)
{
  struct node*temp=malloc(sizeof(struct node));
  temp->data=x;
  temp->next=NULL;
  if(head==NULL)
  {
    head=last=temp;
  }
  else
  {
    last->next=temp;
    last=temp;
  }
}
void print()
{
  struct node* tmp=head;
  while(tmp !=NULL)
  {
    printf("%d ",tmp->data);
    tmp=tmp->next;
  }
}
void reverse()
{
  struct node *current,*prev,*next;
  current=head;
  prev=NULL;
  while(current !=NULL)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
}
int main()
{
  int n;
  printf("enter the number of element in LL: ");
  scanf("%d",&n);
  int x;
  for(int i=1;i<=n;i++)
  {
    printf("\nenter a number:: ");
    scanf("%d",&x);
    insert(x);
    print();
  }
  printf("\nreversed number is\n");
  reverse();
  print();
  return 0;
}
