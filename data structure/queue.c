#include<stdio.h>
#include<stdlib.h>
#define N 10
int queue[N];
int rear = -1 , front = -1 ;
void insert()
{
    int num;
    printf("enter the data");
    scanf("%d",&num);
    if(rear == N-1)
    printf("over flow");
    if(front == -1 && rear == -1)
    {
        front = rear =0;
        queue[rear] = num;
    }
    else{
        rear ++;
        queue[rear] = num;
    }
}


void delete()
{
    int val;
    if(front == -1 || front > rear)
    {
    printf("under flow");
    }
    else{
        val = queue[front];
        front ++;
        if(front>rear)
        {
            front = rear = -1;
        }
    }
    printf("the deleted element = %d", val);

}


void peek()
{
    int y;
    if(front == -1 || front > rear)
    printf("queue is empty"); 
    else{
        y = queue[front];
    }
    printf("%d",y);
}


void display()
{
    int i;
       if(front == -1 || front > rear)
    printf("queue is empty"); 
    else{
        for(i=front;i<=rear;i++)
        printf("%d",queue[i]);
    }
}

void main()
{
    int ch;
    while(1)
    {
         printf("\n 1.insert \n 2.delete \n 3.peek \n 4.display  \n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: peek(); break;
            case 4: display(); break;
            default: exit(0);
        }
    }
}
