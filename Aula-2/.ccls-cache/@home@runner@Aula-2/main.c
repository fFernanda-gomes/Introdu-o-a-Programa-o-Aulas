#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // ex 1
  /* float price;

  printf("Insira o valor do produto: ");
  scanf("%f", &price);

  if( price < 50 ) {
    printf("Produto sem desconto, valor final: R$ %.2f", price);
    
  } else if( price >= 50 && price < 100 ) {
    float desconto = price * 0.1;
    float valorFinal = price - desconto;
    printf("Produto com 10%% de desconto, valor final: R$ %.2f", valorFinal);
    
  } else if( price >= 100 ) {
    float desconto = price * 0.2;
    float valorFinal = price - desconto;
    printf("Produto com 20%% de desconto, valor final: R$ %.2f", valorFinal);
  } */

  // ex 2
  /*
  int n1;
  int n2;
  int n3;

  printf("Insira o primeiro número: ");
  scanf("%i", &n1);

  printf("Insira o segundo número: ");
  scanf("%i", &n2);

  printf("Insira o terceiro número: ");
  scanf("%i", &n3);

  if ( n1 > n2 && n1 > n3 ) {
    printf("O primeiro número é o maior entre eles");
    
  } else if ( n2 > n1 && n2 > n3 ) {
    printf("O segundo número é o maior entre eles");

  } else if ( n3 > n1 && n3 > n1 ) {
    printf("O terceiro número é o maior entre eles");

  } else {
    printf("O números são iguais");
  }
  */

  //ex 3
  /*
  int number;

  printf("informe um número inteiro: ");
  scanf("%i", &number);

  (number % 2 == 0) ? printf("%d é par", number)
                    : printf("%d é ímpar", number);
  */

  //ex 4
  /*
  float nota1;
  float nota2;
  float nota3;
  float nota4;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  printf("Digite a quarta nota: ");
  scanf("%f", &nota4);

  float result = ( nota1 + nota2 + nota3 + nota4 ) / 4;

  ( result >= 6 ) ? printf("Aprovado com média %.2f", result) 
                  : printf("Reprovado com média %.2f", result);
  */

  //ex 5
  /*
  float peso;
  float altura;

  printf("inforome seu peso: ");
  scanf("%f", &peso);

  printf("informe sua altura: ");
  scanf("%f", &altura);

  float calc = peso / (altura * altura);

  if ( calc < 18.5 ) {
    printf("magreza");

  } else if ( calc >= 18.5 && calc <= 24.9 ) {
    printf("normal");

  } else if ( calc >= 25 && calc <= 29.9 ) {
    printf("sobrepeso");

  } else if ( calc >= 30 && calc <= 39.9 ) {
    printf("obesidade");

  } else if ( calc >= 40 ) {
    printf("obesidade grave");

  }
  */
}