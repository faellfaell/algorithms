#include <stdio.h>
#include <stdlib.h>

int main(){

  int arr[]={5,10,15,20,25,30,35,40,45,50};
  int low = 0;
  int high = 9;
  int mid = (high + low)/2;
  int num;

  printf("select a number:\n");
  scanf("%i", &num);
  
  while(num != arr[mid])
  {
    if(low > high)
    {
      printf("\nnot listed\n");
      return 1;
    }
    if(num > arr[mid])
    {
      low = mid + 1;
      mid = (low + high)/2;
    }else if(num < arr[mid])
    {
      high = mid - 1;
      mid = (low + high)/2;
    }
   } 
  printf("\n%i found on index: %i\n", arr[mid], mid);
  return 0;
}
