#include<stdio.h>
#define size 5

int stack[size];
int top=-1;

void push(int x)
{
    if(top==size-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        stack[++top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("popped element:%d\n",stack[top--]);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("top element is :%d\n",stack[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("stack elememt:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
        printf("\n");
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    peek();
    display();
    return 0;
}