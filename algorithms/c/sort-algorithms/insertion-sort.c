#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int tmp;
  int arr[10];
  int i = 0;

  printf("\nselect 10 numbers to sort\n");
  while(i < 10)
  {
  scanf("%i", &arr[i]);
  i++;
  }

  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      if(arr[j] > arr[j+1])
      {
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }

  for(int k = 0; k < 10; k++)
  {
    printf("%i ", arr[k]);
  }
  printf("\n");
return 0;
}
