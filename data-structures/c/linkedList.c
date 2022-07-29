#include <stdio.h>
#include <stdlib.h>

struct node
{
  int index;
  int data;
  struct node *next;
};

int main()
{
  struct node *head;

  struct node *n1 = malloc(sizeof(struct node));
  struct node *n2 = malloc(sizeof(struct node));
  struct node *n3 = malloc(sizeof(struct node));
  struct node *n4 = malloc(sizeof(struct node));
  struct node *n5 = malloc(sizeof(struct node));
  
  n1->index = 1; 
  n2->index = 2;
  n3->index = 3;
  n4->index = 4;
  n5->index = 5;

  n1->data = 5;
  n2->data = 10;
  n3->data = 15;
  n4->data = 20;
  n5->data = 25;

  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;
  n5->next = NULL;
  
  head = n1;
  
  struct node *tmp = head;
  while(tmp != NULL)
  {
    printf("\n%i\n", tmp->data);
    tmp = tmp->next;
  }

  free(n1);
  free(n2);
  free(n3);
  free(n4);
  free(n5);

  return 0;
}


