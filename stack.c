//implementing stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*link;
};
struct node* top;
void push(int x)
{
  struct node*temp=malloc(sizeof(struct node));
  temp->data=x;
  temp->link=top;
  top=temp;
}
void pop()
{
  struct node*temp;
  if(top==NULL)
  {
    printf("stack is empty");
    return;
  }
  temp=top;
  top=top->link;
  free(temp);
}
void display()
{
  struct node*temp=top;
  while(temp != NULL)
  {
    printf("%d ",temp->data);
    temp=temp->link;
  }
  printf("\n");
}

int IsEmpty()//return 0 if not empty and 1 if empty
{
    return top == NULL;
}

// function to return top element in a stack
int Top()
{
    if (!IsEmpty())
        return top->data;
    else
        exit(0);
}


int main()
{
  int choice,value;
  while(1)
  {
    printf("\n******MENNNNUUUU*****\n");
    printf("\n1.push\n2.pop\n3.display\n4.exit\n5.IsEmpty\n6.Top\n");
    printf("enter your choice:: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1:
      {
        printf("enter the value to insert:: ");
        scanf("%d",&value);
        push(value);
        break;
      }
      case 2:
      {
        pop();
        break;
      }
      case 3:
      {
        display();
        break;
      }
      case 4:
      {
        exit(0);
      }
      case 5:
      {
        printf("%d ",IsEmpty());
        break;
      }
      case 6:
      {
        printf("%d ",Top());
        break;
      }
      default:
      {
        printf("invalid!!!!");
      }
    }
  }
}
