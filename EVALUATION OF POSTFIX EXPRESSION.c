//EVALUATION OF POSTFIX EXPRESSION 

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

#define MAX 20

int ar[MAX],top=-1;

void push(int x)
{
    ar[++top]=x;
}

int pop()
{
    return ar[top--];
}

int operation(int a,int b,char ch)
{
    switch(ch)
    {
        case '^':return (pow(a,b));
        case '*':return (a*b);
        case '/':return (a/b);
        case '%':return (a%b);
        case '+':return (a+b);
        case '-':return (a-b);
    }
}

int main()
{
    char postfix[MAX],ch;
    int i=0,a,b,result=0;
    printf("enter postfix expression");
    scanf("%s",postfix);
    while(postfix[i]!='\0')
    {
        ch=postfix[i];
        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else 
        {
            b=pop();
            a=pop();
            result=operation(a,b,ch);
            push(result);
        }
        i++;
    }
    printf("the result of postfix expression is %d\n",ar[top]);

    return 0;
}
