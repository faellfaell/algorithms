#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head;

void insert_beginning();
void insert_middle();
void insert_ending();
void delete_beginning();
void delete_middle();
void delete_ending();
void search();
void sort();
void check();

int main()
{
  head = NULL;
  int choice;

  while(1)
  { 
    printf("\nchoose by typing the number\n\n");
    printf("1-insert in the beginning of the list\n");
    printf("2-insert in the middle of the list\n");
    printf("3-insert in the ending of the list\n");
    printf("4-delete the first element of the list\n");
    printf("5-delete the last element of the list\n");
    printf("6-delete in the middle of the list\n");
    printf("7-search an element in the list\n");
    printf("8-sort the elements of the list\n");
    printf("9-check elements of the list\n");
    printf("10-exit the program\n");
    scanf("%i", &choice);

    switch(choice)
    {
      case 1: insert_beginning();
              break;
      case 2: insert_middle();
              break;
      case 3: insert_ending();
              break;
      case 4: delete_beginning();
              break;
      case 5: delete_middle();
              break;
      case 6: delete_ending();
              break;
      case 7: search();
              break;
      case 8: sort();
              break;
      case 9: check();
              break;
      case 10: exit(0);
    }
  }

  return 0;
}

void sort()
{
  printf("a");
}

void search()
{
  printf("a");
}

void delete_middle()
{
  printf("a");
}

void delete_ending()
{
  struct node *temp = head;

}

void delete_beginning()
{
  if()
  struct node *temp = malloc(sizeof(struct node));
  temp = head->next;
  free(head);
  head = temp;
  free(temp);
}

void insert_middle()
{
  struct node *temp1 = head;
  struct node *temp2 = head;
  struct node* newNode = malloc(sizeof(struct node));

  int position;
  int size;
  //traverse the list and storing its size
  while(temp1 != NULL)
  {
    temp1 = temp1->next;
    size++;
  }
  printf("\npush the element\n");
  scanf("%i", &newNode->data);
  printf("\nchoose the position\n");
  scanf("%i", &position);
  //
  while(position > size)
  { 
    printf("\ninvalid position\n");
    printf("size of the list:%i\n", size);
    scanf("%i", &position);
  }
  if(position <= 1)
  {
    newNode->next = head;
    head = newNode;
  }
  else
  {
    while(position > 2)
    {
      temp2 = temp2->next;
      position--;
      printf("\nnnnnn%i\n", temp2->data);
    }
    printf("\naaaaa%i\n", temp2->data);
    newNode->next = temp2->next;
    temp2->next = newNode;
  }
}

void check()
{
  struct node *temp = head;
  printf("\n");
  while(temp != NULL)
  {
    printf("%i ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void insert_ending()
{
  struct node *newNode = malloc(sizeof(struct node));
  scanf("%i", &newNode->data);
  newNode->next = NULL;

  if(head == NULL)
  {
    head = newNode;
  }
  else
  {
    struct node *temp = head;
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}


void insert_beginning()
{
  struct node *newNode = malloc(sizeof(struct node));
  scanf("%i", &newNode->data);
  newNode->next = head;
  head = newNode;
}

