#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void topp();
#define N 10
int stack[N];
int top=-1;
void main()
{
    int ch;
    while(1)
    {
        printf("\n 1.push \n 2.pop \n 3.display \n 4.top \n 5.exit \n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();break;
            case 2: pop();break;
            case 3: display();break;
            case 4: topp();break;
            case 5: exit(0);break;
            default: printf("invalid choice");
        }
    }
}
void push()
{
    int x;
    printf("enter the value");
    scanf("%d",&x);
    if(top ==N-1)
    {
        printf("overflow");

    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    printf("underflow");
    else
    {
        item=stack[top];
        top--;
        printf("the deleted item is %d",item);
    }
}
void topp()
{
    if(top==-1)
    printf("stack is empty");
    else
    {
        printf("the top element is %d",stack[top]);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
    printf("\t %d",stack[i]);
    }
    printf("\n");

}
