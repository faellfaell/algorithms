#include <stdio.h>
#include <stdlib.h>

struct queue
{
  int array[10];
  int top;
};struct queue q1 = {.top = 0};

void enqueue();
void dequeue();

int main()
{
  //prints queue array elements
  int choice;
  int i = 0;
  printf("\n[-");
  while(i < 10)
  {
    printf("%i-", q1.array[i]);
    i++;
  }printf("]\n");
  
  //program menu
  while(1)
  {
    printf("\nchoose an operation\n"); 
    printf("1-to enqueue\n");
    printf("2-to dequeue\n");
    printf("4-to exit the program: ");
    scanf("%i",&choice);
    
    switch (choice)
    {
      case 1: enqueue();
              break; 

      case 2: dequeue();
              break;

      case 4: exit(0);
              break;
    }
  }
  return 0;
}

//function to "dequeue" or "pop" elements of the queue array
void dequeue()
{
  //check if queue is empty and throw user back to menu
  if(q1.top == 0)
  {
    printf("\nQUEUE EMPTY!\n");
  }
  //"dequeue" or "pop" the top element of the queue 
  else if(q1.top < 10 && q1.array[q1.top] != 0)
  {
    q1.array[q1.top] = 0;
    q1.top--;
  }
  else
  {
    q1.array[q1.top-1] = 0;
    q1.top--;
  }
  //prints all queue array elements
  int k = 0;
  printf("\n[-");
  while(k < 10)
  {
    printf("%i-", q1.array[k]);
    k++;
  }
  printf("]\n");
  printf("%i", q1.top);
}

//function to "enqueue" or "push" elements to queue array
void enqueue()
{
  //shift all queue array elements 
  if(q1.array[0] != 0 && q1.array[9] == 0)
  {
    int i = 0;
    int toplen = q1.top;
    while(toplen > i)
    {
      q1.array[toplen] = q1.array[toplen-1];
      q1.array[toplen-1] = 0;
      toplen--;
    }
  }
  
  //"enqueue" or "push" elements into the queue array
  if(q1.array[0] == 0 && q1.top != 10)
  {
    printf("\ninsert a number to enqueue\n");
    scanf("%i", &q1.array[0]);
    q1.top++;
  }
  else if(q1.array[0] == 0 && q1.top == 10)
  {
    printf("\ninsert a number to enqueue\n");
    scanf("%i", &q1.array[0]);
  }
  else
  {
    printf("\nQUEUE FULL! DEQUEUE TO INSERT\n");
  }
  //prints queue array elements
    int k = 0;
    printf("\n[-");
    while(k < 10)
    {
      printf("%i-", q1.array[k]);
      k++;
    }

    printf("]\n");
    printf("%i", q1.top);
}

