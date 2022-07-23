#include <stdio.h> 
#include <stdlib.h>

int top = -1;
int stack[10];

void push();
void pop();
void check();

int main(){

  int choice;

  while(1)
  {  
    printf("\nchoose\n");
    printf("1-to increase the stack\n");
    printf("2-to decrease the stack\n");
    printf("3-to check the stack\n");
    printf("4-to exit the program\n");

    scanf("%i", &choice);
  
    switch (choice)
    {
      case 1: push();
              break;
      case 2: pop();
              break;
      case 3: check();
              break;
      case 4: exit(0);
              break;
    }
  }

  return 0;
}

void push()
{
  if(top == 9)
  {
    printf("\nSTACK FULL\n");
  }
  else
  {
    printf("\npush\n");
    top++;
    scanf("%i", &stack[top]);
    int i = 0;
    printf("\n[-");
    while(i < 10)
    {
    printf("%i-", stack[i]);
    i++;
    }
    printf("]\n");
    printf("\nlast element: %i\n", stack[top]);
  }
}

void pop()
{
  if(top == 0)
  {
    printf("\nSTACK EMPTY");
  }
  else
  {
    stack[top] = 0;
    top--;
    int i = 0;
    printf("\n[-");
    while(i < 10)
    {
    printf("%i-", stack[i]);
    i++;
    }
    printf("]\n");
    printf("\nlast element: %i\n", stack[top]);
  }
}

void check()
{
    int i = 0;
    printf("\n[-");
    while(i < 10)
    {
      printf("%i-", stack[i]);
      i++;
    }
    printf("]\n");
    printf("\nlast element: %i\n", stack[top]);
}
