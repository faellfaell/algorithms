#include <stdio.h>
#include <stdlib.h>

int main(){

int arr[10];
int l = 0;

printf("\nselect the numbers to be sorted\n");
while(l < 10)
{
  scanf("%i", &arr[l]);
  l++;  
}
int tmp;

for(int j = 0; j < 10; j++)
{
  for(int i = 0; i < 10; i++)
  {
    if(arr[i] > arr[i+1])
    {
      tmp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = tmp;
      }
    }
  }
for(int a = 0; a < 10; a++)
{
printf("%i ", arr[a]);
}
printf("\n");
return 0;
}
