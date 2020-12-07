#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char str[50];
struct node *top;

struct node
{
    char data;
    struct node *next; //! Almost done (90%) :|
};

void transverse(struct node *ptr)
{
    if (ptr == NULL)
    {
        printf("fine");
        return;
    }
    else
    {
        printf("Error in brackets");
        return;
    }

    // while (ptr != NULL)
    // {
    //     printf("%c\t", ptr->data);
    //     ptr = ptr->next;
    // }
}
void Push(char x)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    // printf("Enter no : ");
    // scanf("%d", &ptr->data);
    ptr->data = x;
    if (top == NULL)
    {
        ptr->next = NULL;
        top = ptr;
        return;
    }
    ptr->next = top;
    top = ptr;
}

void Pop()
{
    struct node *ptr;
    ptr = top;
    if (ptr == NULL)
    {
        printf("Error");
        return;
    }
    top = top->next;
    free(ptr);
}

char TOP()
{
    return top->data;
}

void main()
{
    printf("Enter string : ");
    scanf("%s", &str);
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] == '(') || (str[i] == '{') || (str[i] == '['))
        {
            Push(str[i]);
        }
        else if ((str[i] == ')') || (str[i] == '}') || (str[i] == ']'))
        {
            if (((TOP() == '(') && (str[i] == ')')) ||
                ((TOP() == '{') && (str[i] == '}')) ||
                ((TOP() == '[') && (str[i] == ']')))
            {
                Pop();
            }
            else
            {
                printf("Error in brackets");
                // exit(0);
                break;
            }
        }
    }
    transverse(top);
}