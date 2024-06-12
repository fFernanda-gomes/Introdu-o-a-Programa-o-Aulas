#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int positivoNegativoZero(void) {
  int number;

  printf("Digite um número inteiro: ");
  scanf("%i", &number);

  if (number > 0) {
    printf("O número %i é positivo! ", number);

  } else if (number < 0) {
    printf("O número %i é negativo! ", number);

  } else {
    printf("O número zero! ");
  }
  return 0;
}

int login(void) {
  char usuario[40];
  char validUsuario[40] = "fernanda";
  int senhaUsuario;
  int senha = 1234;


  printf("Digite um nome de usuario: ");
  scanf("%s", usuario);

  printf("Digite uma senha de numeros inteiros: ");
  scanf("%i", &senhaUsuario);

  int resultUsuario = strcmp(usuario, validUsuario);

  if ( senhaUsuario == senha && resultUsuario == 0 ) {
    printf("Login realizado!");

  } else if ( senhaUsuario != senha || resultUsuario != 1 ) {
    printf("Falha no login!");

  }

  return 0;
}

int faixaEtaria(void) {
  int idade;

  printf("Informe sua idade: ");
  scanf("%i", &idade);

  if ( idade >= 0 && idade <= 12 ) {
    (idade >= 6) ? printf("Criança e está no fundamental!")
                 : printf("Criança e está em idade de creche!");

  }
  else if ( idade >= 13 && idade <= 17 ) {
    printf("Adolescente e está no ensino médio!");

  } else if ( idade >= 18 && idade <= 64 ) {
    printf("Adulto em idade para trabalhar!");

  } else if ( idade >= 65 ) {
    int tempo;
    printf("Informe seu tempo de contribução: ");
    scanf("%i", &tempo);

    (tempo >= 15 ) ? printf("Aposentadoria aprovada!")
                   : printf("Aposentadoria não aprovada");
  }
  return 0;

}

int tamanhoInteiro(void) {
  int number;

  printf("informe um número inteiro: ");
  scanf("%i", &number);

  if (number < 10) {
    printf("Numero pequeno e ");

    (number % 2 == 0) ? printf("%d é par", number)
                      : printf("%d é ímpar", number);

  } else if (number >= 10 && number <= 50) {
    printf("Número médio e ");

    (number % 2 == 0) ? printf("%d é par", number)
                      : printf("%d é ímpar", number);

  } else if (number > 50) {
    printf("Número grande e ");

    ((number + 13) / 2) % 2 == 0 ? printf("%d é par", number)
                                 : printf("%d é ímpar", number);

  }

  return 0;
}

int main(void) {
  // exercicio 1
  /*  
    positivoNegativoZero(); 
  */

  // execicio 2
  /*
    login();
  */

  // exercicio 3
  /*
    faixaEtaria();
  */

  // exercicio 4
  /*
    tamanhoInteiro();
  */

  // ex 5
  
  // char usuario[40];
  // char validUsuario[40] = "user";
  
  // int senhaUsuario;
  // int senha = 1234;


  // printf("Digite um nome de usuario: ");
  // scanf("%s", &usuario);

  // printf("Digite uma senha de numeros inteiros: ");
  // scanf("%i", &senhaUsuario);

  // int resultUsuario = strcmp(usuario, validUsuario);

  // if ( senhaUsuario == senha &&  resultUsuario == 0) {
  //   printf("Login realizado!");

  //     int escolha = 4;
     
  
  //     while ( escolha != 0 ) {
  //       printf("\n\nSelecione uma das três opções:\n");
  //       printf("1 - Número positivo ou negativo\n");
  //       printf("2 - Classifique uma idade em uma faixa etária\n");
  //       printf("3 - Classifique um número inteiro como pequeno (menos de 10), médio (entre 10 e 50) ou grande (acima de 50)\n"); 
  //       printf("\nDigite sua escolha: "); 
  //       scanf("%d", &escolha);
        
  //       if ( escolha == 1 ) {
  //         positivoNegativoZero();

  //       } else if ( escolha == 2 ) {
  //         faixaEtaria();

  //       } else if ( escolha == 3 ) {
  //         tamanhoInteiro();

  //       } else {
  //         int escolha = 0;
  //       }
  //     }

  // } else if ( senhaUsuario != senha ) {
  //   printf("Falha no login!");
  // }

  
}


