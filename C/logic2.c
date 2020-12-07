#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node *head;
struct Node *ti;

struct Node{
  int data;
  struct Node *next;
};

void Print(struct Node *ptr){
  while (ptr != NULL)
  {
    printf("%d \n",ptr->data);
    ptr = ptr->next;
  }
}

void Insert(int x){
  ti = (struct Node *)malloc(sizeof(struct Node));
  ti->next = NULL;
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = ti;
  head = temp;
} 



void main(){
  head = (struct Node *)malloc(sizeof(struct Node));
  head->next = NULL;
  Insert(5);
  Insert(6);
  Insert(7);
  Print(head);

}