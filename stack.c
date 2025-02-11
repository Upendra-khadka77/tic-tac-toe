#include<stdio.h>
#include <stdlib.h>
#define max 5
int top=-1, a[max];
void push();
void pop();
void display();

int main()
{
    
    int ch;
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.display\n");

    while(1)
    {
        printf("enter the choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;
            case 3:
            display();
            break;
             default:
             printf("invalid choice\n");
        }
    }
}

void push()
{
    int x;
    if(top==max-1)
    {
        printf("overflow condition in stack\n");

    }
    else{
        printf("enter the value that you want push:");
        scanf("%d",&x);
        top++;
        a[top]=x;
    }
}
 void pop()
 {
    int data;
    if(top==-1)
    {
        printf("stack is empty\n");

    }
    else{
        data=a[top];
        
        top--;
        printf("poped element is %d:",data);
    }
 }
 void display()
 {
    int i;
    if(top==-1)
    {
        printf("the stack is empty");

    }
    else{
        for(i=top;i>=0;i--)
        printf("%d\n",a[i]);
    }
 }