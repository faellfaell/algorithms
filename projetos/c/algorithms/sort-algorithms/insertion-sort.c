#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int tmp;
  int arr[]={5,7,3,9,1,6,2,8,4,10};
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
  for(int k = 0; k < 10; k++){
    printf("%i", arr[k]);
  }
return 0;
}
