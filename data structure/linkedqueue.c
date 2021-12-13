#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*newnode, *temp;
 struct node *front = 0, *rear = 0;


 void enqueue()
 {
     newnode = (struct node *)malloc(sizeof(struct node));
     printf("enter the data");
     scanf("%d", &newnode->data);
     newnode->next = 0;
     if(front == 0){
         front = rear = newnode;
     }
     else{
         rear->next = newnode;
         rear = newnode;
     }

 }


 void dequeue()
 {
     if(front == 0)
     {
         printf("underflow");
     }
     else{
         temp = front;
         front = front->next;
         free(temp);
     }
 }


 void display()
 {
     temp = front;
     while(temp != 0)
     {
         printf("%d",temp->data);
         temp = temp->next;
     }

 }


 int main()
 {
      int ch;
    while(1)
    {
         printf("\n 1.enqueue \n 2.dequeue \n 3.display \n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            default: exit(0);
        }
    }
 }
