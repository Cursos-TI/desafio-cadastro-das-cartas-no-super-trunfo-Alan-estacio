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
int pontos,pontos2;
float area, area2, pib, pib2 , populacao, populacao2;
char nome[50];
char estado[3];
char codigo[4];
char cidade[50];
char nome2[50];
char estado2[3];
char codigo2[4];
char cidade2[50];

printf("Insira abaixo as informações para o cadastro das cartas: \n");
printf("CARTA 1\n");

printf("Estado: ");
scanf("%s", estado);

printf("Código: ");
scanf("%s", codigo);

printf("Cidade: ");
scanf("%s", cidade);

printf("População: ");
scanf("%f", &populacao);

printf("Área: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos);

printf("CARTA 2\n");

printf("Estado: ");
scanf("%s", estado2);

printf("Código: ");
scanf("%s", codigo2);

printf("Nome da cidade: ");
scanf("%s", cidade2);

printf("População: ");
scanf("%f", &populacao2);

printf("Área: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos2);

printf("Suas cartas cadastradas são:\n");
printf("       CARTA 1\n");
printf("    ESTADO: %s\n", estado);
printf("    CÓDIGO: %s\n", codigo);
printf("    CIDADE: %s\n", cidade);
printf("    POPULAÇÃO: %.3f Mil\n", populacao);
printf("    ÁREA: %.1f Km²\n", area);
printf("    PIB: %.1f\n", pib);
printf("    PONTOS TURÍSTICOS: %d\n", pontos);

printf("       CARTA 2\n");
printf("    ESTADO:%s\n", estado2);
printf("    CÓDIGO:%s\n", codigo2);
printf("    CIDADE:%s\n", cidade2);
printf("    POPULAÇÃO:%.2f\n", populacao2);
printf("    ÁREA:%.1f\n", area2);
printf("    PIB:%.1f\n", pib2);
printf("    PONTOS TURÍSTICOS: %d\n", pontos2); 
}
