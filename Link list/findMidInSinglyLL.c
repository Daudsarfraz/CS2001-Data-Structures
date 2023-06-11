#include<stdio.h>
#include<stdlib.h>

struct Node{
  struct Node * prev;
  int data;
  struct Node * next;
}*head;

struct Node * createNode(int value){
  struct Node * node = (struct Node *)malloc(sizeof(struct Node));
  node->data = value;
  node->next = NULL;
  return node;
}

void createLinkList(int values[], int length){
  head = createNode(values[0]);
  struct Node * current, *last = head;
  for (int i = 1; i < length; ++i){
    current = createNode(values[i]);
    last->next = current;
    last = current;
  }
}

int findMid(struct Node * head, struct Node *tail){
  while(head){
    head = head->next;
    if(head)
      head = head->next;
    if(head)
      tail = tail->next;
  }
  return tail->data;
}

void printList(struct Node * head){
 while(head){
  printf("%d ", head->data );
  head = head->next;
 }
 printf("\n");
}

int main(){
  int values[5];
  printf("Number of nodes are : 5\n");
  printf("Enter all elements to be inserted in nodes\n");
  for (int i = 0; i < 5; ++i)
    scanf("%d", &values[i] );
  createLinkList(values, 5);
  printf("created LinkList is\n");
  printList(head);
  printf("Middle node value = %d\n",findMid(head,head) );
  return 0;
}