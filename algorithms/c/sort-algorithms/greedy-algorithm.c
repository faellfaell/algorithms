#include <stdio.h>
#include <stdlib.h>

int main(){
  
  
  int i = 0;
  int arr[]={100, 50, 25, 5, 1};
  int num;

  printf("\nselect a number\n");
  scanf("%i", &num);

  while(num > 0)
  {
    printf("%i\n", num);
    if(arr[i] <= num)
    {
      num -= arr[i];
    }else
    {
      i++;
    }
  }
  return 0;
}
