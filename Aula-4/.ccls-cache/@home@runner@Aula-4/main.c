#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  /*
    for e while
    o for é quando ja tenho valor definido até onde eu quero chegar


    o while é pra quando não tem um valor definido até onde eu quero chegar

    int num;
    printf("Digite um número final: ");
    scanf("%i", &num);

    // for (int i = 0; i <= num; i++) {
    //    printf("%i\n", i);
    // }
  */
  
  //ex 0
  /*
  int inital;
  int end;

  printf("Digite um número inteiro para começar: ");
  scanf("%i", &inital);
  
  printf("Digite um número inteiro para terminar: ");
  scanf("%i", &end);
  
  // ; inital <= end; inital++ --> outa opção 
  for ( int i = inital; inital <= end; inital++ ) {
    printf("%i\n", inital);
  }
  */

  //ex 1
  /*
  int i;

  for ( i = 0; i <= 150; i++) {
    printf("%i\n", i);
  }
  */

  //ex 2
  /*
  for (int i = 0; i <= 150; i += 2) {
    printf("%i\n", i);
  }
  */
  
  //ex 3
  /*
  for (int i = 1; i <= 150; i += 2) {
    printf("%i\n", i);
  }
  */

  //ex 4
  /*
  for (int i = 1; i <= 10; i++) {
    int result = 3 * i;
    printf("3 x %i = %i\n", i, result);
  }
  */

  //ex 5
  /*
  int number;
  int factorial = 1;
  
  printf("Digite um número inteiro positivo para calcular o fatorial: ");
  scanf("%d", &number);
  
  for (int i = 1; i <= number; i++) {
      factorial = factorial * i;
    printf("O fatorial de %d é: %i\n", number, factorial);
  }
  */

  // ex 6
  /*
  int linha;
  int coluna;

  printf("Digite o valor da linha: ");
  scanf("%d", &linha);
  
  printf("Digite o valor da coluna: ");
  scanf("%d", &coluna);

  for (int i = 1; i <= coluna; i++) {
    printf("\n* ");

    for (int j = 2; j <= linha; j++) {
      printf("* ");
    }
  }
  */

}

