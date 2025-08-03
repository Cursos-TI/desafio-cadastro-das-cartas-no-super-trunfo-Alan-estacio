#include <stdio.h>
/*BELEZA!! int=Número inteiro; float=Para medida mas 
de menor valor; double=É de medida mas para 
valores ALTOS; char=Caracteres; void= Uma função não 
retorna nenhum valor*/
/*%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número com ponto flutuante no formato padrão.
%e: Imprime um número com vírula/ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.*/
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int pontos,pontos2, populacao, populacao2;
float area, area2, pib, pib2;
char estado[50];
char codigo[5];
char cidade[50];
char estado2[50];
char codigo2[5];
char cidade2[50];

printf("Insira abaixo as informacoes para cadastro das cartas: \n");
printf("CARTA 1\n");

printf("Estado: ");
scanf(" %48[^\n]", estado);

printf("Codigo: ");
scanf("%s", codigo);

printf("Cidade: ");
scanf(" %48[^\n]", cidade);

printf("Populacao: ");
scanf("%d", &populacao);

printf("Area: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("Numero de pontos turísticos: ");
scanf("%d", &pontos);

printf("CARTA 2\n");

printf("Estado: ");
scanf(" %48[^\n]", estado2);

printf("Codigo: ");
scanf("%s", codigo2);

printf("Cidade: ");
scanf(" %48[^\n]", cidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("Area: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de pontos turisticos: ");
scanf("%d", &pontos2);
printf("\n");

printf("Suas cartas cadastradas sao:\n");
printf("       CARTA 1\n");
printf("    ESTADO: %s\n", estado);
printf("    CÓDIGO: %s\n", codigo);
printf("    CIDADE: %s\n", cidade);
printf("    POPULAÇÃO: %d \n", populacao);
printf("    ÁREA: %.2f Km2\n", area);
printf("    PIB: %.2f\n", pib);
printf("    NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos);

printf("       CARTA 2\n");
printf("    ESTADO:%s\n", estado2);
printf("    CÓDIGO:%s\n", codigo2);
printf("    CIDADE:%s\n", cidade2);
printf("    POPULAÇÃO:%d\n", populacao2);
printf("    ÁREA:%.2f Km2\n", area2);
printf("    PIB:%.2f\n", pib2);
printf("    NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos2); 

  
}