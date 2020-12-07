#include<stdio.h>
#include<conio.h>
#include<string.h>

int top = -1;
char stack[20];

void PUSH(char x){
    if(top == 20){
        printf("stack full");
        return;
    }
    else{
        top++;
        stack[top]=x;
    }
}

void POP()
{
    // printf(stack[top]);
    top--;
}
void Print(){
    for(int i=top;i>=0;i--){
        
        printf("%c",stack[i]);
    }
}

void main()
{
    char str[20];
    printf("Enter string : ");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        PUSH(str[i]);
    }
    Print();

}