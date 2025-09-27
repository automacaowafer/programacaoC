#include <stdio.h>
int main(){
    int idade, matricula;
    float altura;
    char aluno[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua nome: ");
    scanf("%s", &aluno);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("nome do aluno: %s \n matricula: %d\n", aluno, matricula);
    printf("idade: %d \naltura: %f\n", idade, altura);
}


  

  
  
   