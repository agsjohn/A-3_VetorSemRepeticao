#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10

main() {
  int c, vet[T], rep, cont;
  for(c = 0; c < T; c++){
    printf("Digite o %i número: ", c + 1);
    do{
      rep = 0;
      scanf("%i", &vet[c]);
      getchar();
      for(cont = 0; cont < c; cont++){
        if(vet[c] == vet[cont]){
          rep++;
        }
      }
      if(rep != 0){
        printf("Número repetido, digite novamente: ");
      }
    }while(rep != 0);
  }
  printf("\nVetor: ");
  for(c = 0; c < T; c++){
    if(c == T - 1){
      printf("%i", vet[c]);
    }
    else{
      printf("%i - ", vet[c]);
    }
  }
  getchar();
}