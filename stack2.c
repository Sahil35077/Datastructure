//stack implementation of an array
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE],top=-1;

int main()
{
  int value,choice;
  while(1)
  {
    printf("\n******MENNNNUUUU*****\n");
    printf("\n1.push\n2.pop\n3.display\n4.exit\n");
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
      default:
      {
        printf("invalid!!!!");
      }
    }
  }
}
void push(int value)
{
  if(top==SIZE-1)
  {
    printf("stack is full overflow");
  }
  else
  {
    top++;
    stack[top]=value;
    printf("insertion success");
  }
}
void pop()
{
  if(top==-1)
  {
    printf("stack is empty underflow");
  }
  else
  {
    printf("deleted is %d",stack[top]);
    top--;
  }
}
void display()
{
  if(top==-1)
  {
    printf("stack is empty");
  }
  else
  {
    int i;
    printf("stack element are:: ");
    for(i=top;i>=0;i--)
    {
      printf("%d  ",stack[i]);
    }
  }
}
