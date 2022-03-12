//implementing stacks using linked lists

#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int data;
    struct stack *next;
};

typedef struct stack node;

node *top=NULL;

void push(int x)
{
    node *new=malloc(sizeof(node));
    new->data=x;
    new->next=NULL;
    if(top==NULL)
    {
        top=new;
    }
    else
    {
        new->next=top;
        top=new;
    }
}

int pop()
{
    node *temp;
    if(top==NULL)
    {
        return -1;
    }
    else
    {
        int x=top->data;
        temp=top;
        top=top->next;
        free(temp);
        return x;
    }
}

int peak()
{
    return top->data;
}

void display()
{
    node *temp=top;
    int i;
    while(temp!=NULL)
    {
        printf("|%d|->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
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
            case 1:printf("enter the element to be insert into the node");
            scanf("%d",&x);
            push(x);
            break;
            case 2:x=pop();
            if (x==-1)
            {
                printf("stack underflown\n");
            }
            else
            {
                printf("the top node is deleted\n");
            }
            break;
            case 3:x=peak();
            printf("the element in the top of the stack is %d\n",x);
            break;
            case 4:display();
            break;
            case 5:exit(0);
            default:printf("enter valid choice\n");
        }
    }
}
