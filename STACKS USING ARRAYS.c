#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int top=-1,a[MAX];

void push(int x)
{
    if (top==MAX-1)
    {
        printf("Stack overflown");
    }
    else
    {
        a[++top]=x;
    }
}

int pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        return a[top--];
    }
}

int peak()
{
    return a[top];
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}

void main()
{
    int x,ch;
    while(1)
    {
        printf("1:push\n2:pop\n3:peak\n4:display\n5:exit\n");
        printf("enter ur choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element to push into the stack\n");
            scanf("%d",&x);
            push(x);
            break;
            case 2:x=pop();
            if(x==-1)
            {
                printf("Stack Underflown");
            }
            else
            {
                printf("the top of the stack deleted\n");
            }
            break;
            case 3:x=peak();
            printf("the top of stack is %d\n",x);
            break;
            case 4:printf("the elements ind the stack are:\n");
            display();
            break;
            case 5:exit(0);
            default:printf("enter valid choice\n");
        }
    }
}
