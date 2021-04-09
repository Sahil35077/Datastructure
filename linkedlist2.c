//inserting at last
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
}*last;
struct node*head;
void insert(int data)
{
  struct node*temp1=malloc(sizeof(struct node));
  temp1->data=data;
  temp1->next=NULL;
  if(head==NULL)
  {
    last=head=temp1;
  }
  else
 {
   last->next=temp1;
   last=temp1;
 }
}
void print()
{
  struct node* temp=head;
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
int main()
{
  int n,x;
  printf("enter the no of element tou want:: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    printf("enter element:: ");
    scanf("%d",&x);
    insert(x);
    print();
  }
  return 0;
}
