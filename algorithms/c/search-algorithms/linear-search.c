#include <stdio.h>
#include <stdlib.h>

int main(){

  int arr[]={3,10,8,7,5,4,9,1,2,6};
  int number;
  int i = 0;

  printf("give a number between 1 and 10\n");
  scanf("%i", &number);
  while (number != arr[i])
  {    
    if(i == 9)
    {
    printf("the given number is not listed\n");
      return 1;
    };
   i++; 
  };
  
  while (number != arr[i])
  {
    i++;
  }
  printf("\n%i found on the: %i position of the list\n", arr[i], i);

  return 0;
}



