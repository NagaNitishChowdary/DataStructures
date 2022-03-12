#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 20 

char a[MAX];
int top=-1;

void push(char ch)
{
    a[++top]=ch;
}

char pop()
{
    return a[top--];
}

void main()
{
    char e[MAX],c,x;
    int flag=1,i=0;
    printf("enter expression\n");
    scanf("%s",e);
    while(e[i]!='\0')
    {
        c=e[i];
        if(c=='('||c=='{'||c=='[')
        {
            push(c);
        }
        else if(c==')'||c=='}'||c==']')
        {
            if(top==-1)
            {
                flag=0;
                break;
            }
            else
            {
                x=pop();
                if((x=='('&&c==')')||(x=='['&&c==']')||(x=='{'&&c=='}'))
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        i++;
    }
    if(top!=-1)
    {
        flag=0;
    }
    if(flag==1)
    {
        printf("Matched\n");
    }
    else 
    {
        printf("not matched\n");
    }
}
