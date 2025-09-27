#include <stdio.h>
int main(){
    //declaração de variaveis
    int carta1_pTuristico, carta1_populacao, carta2_pTuristico, carta2_populacao;
    float carta1_area, carta1_pib, carta2_area, carta2_pib;
    char carta1_estado[20], carta2_estado[20];
    char carta1_cidade[20], carta1_codigo[3], carta2_cidade[20], carta2_codigo[3];

    //entrada do nome do estado
    printf("Estado: "); //pergunta
    scanf("%s", &carta1_estado); //resposta

    //entrada do codigo da carta
    printf("Código da carta: "); //pergunta
    scanf("%s", &carta1_codigo); //resposta

    //entrada do nome da cidade
    printf("Nome da Cidade: "); //pergunta
    scanf("%s", &carta1_cidade); //resposta

    //entrada da quantidade da população
    printf("População: "); //pergunta
    scanf("%d", &carta1_populacao); //resposta

     //entrada do tamanho do territorio
     printf("Área (em km²): "); //pergunta
    scanf("%f", &carta1_area); //resposta

    //entrada do pib
    printf("PIB: "); //pergunta
    scanf("%f", &carta1_pib); //resposta

    //entrada da quantidade de pontos turisticos
    printf("Número de Pontos Turísticos: "); //pergunta
    scanf("%d", &carta1_pTuristico); //resposta
    
    //resultado das perguntas com cada resposta em uma linha
    printf("\n\nCarta 1: \n");
    printf("Estado: %s\n", carta1_estado);
    printf("Código: %s\n", carta1_codigo);
    printf("Nome da Cidade: %s\n", carta1_cidade);
    printf("População: %d\n", carta1_populacao);
    printf("Área: %f\n", carta1_area);
    printf("PIB: %f\n", carta1_pib);
    printf("Número de Pontos Turísticos: %d", carta1_pTuristico);

      //entrada do nome do estado
    printf("\n\nEstado: "); //pergunta
    scanf("%s", &carta2_estado); //resposta

    //entrada do codigo da carta
    printf("Código da carta: "); //pergunta
    scanf("%s", &carta2_codigo); //resposta

    //entrada do nome da cidade
    printf("Nome da Cidade: "); //pergunta
    scanf("%s", &carta2_cidade); //resposta

    //entrada da quantidade da população
    printf("População: "); //pergunta
    scanf("%d", &carta2_populacao); //resposta

     //entrada do tamanho do territorio
     printf("Área (em km²): "); //pergunta
    scanf("%f", &carta2_area); //resposta

    //entrada do pib
    printf("PIB: "); //pergunta
    scanf("%f", &carta2_pib); //resposta

    //entrada da quantidade de pontos turisticos
    printf("Número de Pontos Turísticos: "); //pergunta
    scanf("%d", &carta2_pTuristico); //resposta
    
    //resultado das perguntas com cada resposta em uma linha
    printf("\n\nCarta 2: \n");
    printf("Estado: %s\n", carta2_estado);
    printf("Código: %s\n", carta2_codigo);
    printf("Nome da Cidade: %s\n", carta2_cidade);
    printf("População: %d\n", carta2_populacao);
    printf("Área: %f\n", carta2_area);
    printf("PIB: %f\n", carta2_pib);
    printf("Número de Pontos Turísticos: %d", carta2_pTuristico);
}

