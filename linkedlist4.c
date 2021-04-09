//deleting the node from nth position in linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
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
  struct node*temp=head;
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
}
void delete(int pos)
{
  struct node*temp1=head;
  if(pos==1)
  {
    head=temp1->next;
    free(temp1);
    return;
  }
  for(int i=0;i<pos-2;i++)
  {
    temp1=temp1->next;
    //temp1 points to n-1 position
  }
  struct node* temp2=temp1->next;
  temp1->next=temp2->next;
  free(temp2);
}
int main()
{
  int m;
  printf("enter the number of elements:: ");
  scanf("%d",&m);
  int x;
  int pos;
  for(int i=1;i<=m;i++)
  {
    printf("\nenter the elements: ");
    scanf("%d",&x);
    insert(x);
    print();
  }
  printf("e\nnter a position of an element:: ");
  scanf("%d",&pos);
  delete(pos);
  print();
  return 0;
}
