
#include<stdio.h>
#include<stdlib.h>
void insertbeg();
void insertend();
void insertpos();
void delbeg();
void delend();
void delpos();
void display();
struct node
{
    int data;
    struct node *next;
} *newnode , *temp , *ptr;
    struct node *head = 0;
    int main()
    {
        int ch;
        while(1){
            printf("\n 1. insert at beginning \n 2. insert at end \n 3.insert at given position \n 4.delete at beginning \n 5.delete at end \n 6.delete at given position \n 7.display");
            printf("\n enter the choice");
            scanf("%d",&ch);
            switch(ch){
                case 1: insertbeg(); break;
                case 2: insertend(); break;
                case 3: insertpos(); break;
                case 4: delbeg(); break;
                case 5: delend();break;
                case 6: delpos(); break;
                case 7: display(); break;
                default: exit(0);
            }
        }
return 0;
    }

    //insert a node at the beginning

    void insertbeg()
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head == 0)
        {
            head = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
        display();
    }


    void insertend()
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        temp = head;
        while(temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        display();
    }

    // 
    void delbeg()
    {
        if(head == 0)
        {
            printf("underflow");
        }
        else{
            temp = head;
            head = head->next;
            free (temp);
        }
        display();
    }


    void delend()
    {
        if(head == 0)
        {
        printf("underflow");
        }
        else{
            temp = head;
            while(temp->next != 0)
            {
                ptr = temp;
                temp = temp->next;
            }
            ptr->next =0;
            free(temp);
        }
        display();
    }


    void display()
    {
        if(head == 0)
        {
            printf("underflow");
        }
        else{
            temp = head;
            while(temp != 0)
            {
                printf("%d->",temp->data);
                temp = temp->next;
            }
            
        }
    }



    void insertpos()
    {
        int pos;
        temp = head;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        printf("enter the position");
        scanf("%d",&pos);
        while(temp->next != 0)
        {
            if(temp->data == pos)
            {
                break;

            }
            temp = temp->next;
        
        }
        newnode->next = temp->next;
        temp->next = newnode;
        display();

    }



    void delpos()
    {
        int pos;
        temp = head;
        printf("enter the position");
        scanf("%d",&pos);
        while(temp->data != pos)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = temp->next;
        free (temp);
        display();


    }



