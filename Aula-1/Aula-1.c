#include <math.h>
#include <stdio.h>  //entrada e saida
#include <stdlib.h> //formatação
#include <string.h>

int main(void) {
  // Ex 1 misturado com o exemplo da aula
  /* int age;
  float nota;
  char sexo;
  char nome[40]; //para mais de um caractere
  // strcpy(nome, "João");

  printf("Digite seu nome: ");
  scanf("%s", &nome);

  printf("Digite sua idade: ");
  scanf("%i", &age);

  printf("Digite seu sexo(M ou F): ");
  scanf(" %c", &sexo);

  printf("Digite uma nota de avaliação: ");
  scanf("%f", &nota);

  printf("O(A) %s possui %i anos, é do sexo %c e avaliou com a nota %.2f",
         nome, age, sexo, nota
        );
  */
  // Ex 2
  /*
  char nome[50];
  int idade;
  float salario;

  printf("Digite seu nome: ");
  scanf("%s", &nome);

  printf("Digite sua idade: ");
  scanf("%i", &idade);

  printf("Digite seu salario: ");
  scanf("%f", &salario);

  float porcentagemSalario = salario * 0.3;
  float resultSalario = salario + porcentagemSalario;

  printf("Olá, %s. Vi que possui %i anos e seu salário como o aumento de 30/100
  é R$ %.3f", nome, idade, resultSalario); */

  // ex 3
  /*
  float base;
  float altura;

  printf("Digite o valor da base: ");
  scanf("%f", &base);

  printf("Digite o valor da altura: ");
  scanf("%f", &altura);

  float area = base * altura;

  printf("A area é = %.2f", area); */

  // ex 4
  /*
  float raio;
  float pi = 3.14;

  printf("Digite o raio: ");
  scanf("%f", &raio);

  float area = pi * pow(raio, 2);

  printf("A area do circulo é: %.2f", area); */

  // ex 5
  /*
  float temp;

  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &temp);

  float fahrenheit = (temp * 9/5) + 32;

  printf("A temperatura em graus Fahrenheit é: %.2f", fahrenheit); */

  // ex 6

  float valorProduto;
  float desconto;

  printf("Digite o valor do produto: ");
  scanf("%f", &valorProduto);

  printf("Digite o percentual de desconto: ");
  scanf("%f", &desconto);

  float percentual = desconto / 100;
  float valorDesconto = percentual * valorProduto;
  float valorFinal = valorProduto - valorDesconto;

  printf("O valor final do poduto é R$ %.2f ", valorFinal);
}