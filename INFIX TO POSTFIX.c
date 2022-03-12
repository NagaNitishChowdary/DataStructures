#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 20

int top=-1,j=0;
char postfix[MAX],a[MAX];
 
void push(char ch)
{
    a[++top]=ch;
}

int pop()
{
    return a[top--];
}

int priority(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='*'||ch=='/'||ch=='%')
    {
        return 2;
    }
    else if(ch=='+'||ch=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void precedence(char ch)
{
    while(priority(ch)<=priority(a[top]))
    {
        postfix[j++]=pop();
    }
}
 
void main()
{
    char infix[MAX],ch,x;
    int i=0,a,b;
    printf("enter infix expression\n");
    scanf("%s",infix);
    while(infix[i]!='\0')
    {
        ch=infix[i];
        if(isdigit(ch)||isalpha(ch))
        {
            postfix[j++]=ch;
        }
        else
        {
            switch(ch)
            {
                case '(':push(ch);
                break;
                case '^':
                case '*':
                case '/':
                case '%':
                case '+':
                case '-':precedence(ch);
                push(ch);
                break;
            }
        }
        i++;
    }
    while(top!=-1)
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    printf("the postfix expression is %s\n",postfix);
}
