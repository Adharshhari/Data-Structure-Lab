#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node 
{
    int data;
    struct node *next;
} *newnode, *temp;
struct node *top = 0;
void main()
{
     int ch;
        while(1){
            printf("\n 1. push \n 2. pop \n 3.display");
            printf("\n enter the choice");
            scanf("%d",&ch);
            switch(ch){
                case 1: push(); break;
                case 2: pop(); break;
                case 3: display(); break;
                default: exit(0);
            }
        }

    }


    void push()
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(top == 0)
        {
            top = newnode;

        }
        else{
            newnode->next = top;
            top = newnode;
        }
    }


    void pop()
    {
        if(top == 0)
        {
            printf("underflow");
        }
        else{
            temp = top;
            top = top->next;
            free(temp);  
             }
    }


    void display()
    {
        temp = top;
        while(temp != 0)
            {
                printf("%d->",temp->data);
                temp = temp->next;
            }
    }

