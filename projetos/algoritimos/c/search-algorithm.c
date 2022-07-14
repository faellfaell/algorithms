#include <stdio.h>
#include <stdlib.h>

int main(){

  int lista[]={3,10,8,7,5,4,9,1,2,6};
  int numero;
  int i = 0;

  printf("digite um numero de 1 a 10\n");
  scanf("%i", &numero);
  while (numero != lista[i]){    
    if(i == 9){
    printf("o numero digitado nao pertence a lista\n");
      return 1;
    };
   i++; 
  };
  
  while (nummero != lista[i]) {
    i++;
  }
  printf("\n%i pertence a lista\n", arr[i]);

  return 0;
}



