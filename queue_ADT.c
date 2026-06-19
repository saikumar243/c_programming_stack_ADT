#include<stdio.h>
#define max 5
int queue[max];
int front=0,rear=-1;

void enqueue(int item)
{
    if(rear==max-1)
    {
        printf("queue overflow\n");
        return;
    }
    queue[++rear]=item;
    printf("%d inserted into queue\n",item);
}
void dequeue()
{
    if(front>rear)
    {
        printf("queue uderflow\n");
        return;
    }
    printf("%d deleted from queue\n",queue[front++]);
}
void display()
{
    if(front>rear)
    {
        printf("queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d",queue[i]);
    }
    printf("\n");
}
int main()
{
    int choice,item;
    while(1)
    {
        printf("\n 1.enqueue 2.dequeue 3.display 4.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("enter elements to insert:");
                scanf("%d",&item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("invalid choice\n");
        }
    }
}