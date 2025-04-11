#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char carta1;
    char estado; 
    char código;
    char cidade; 
    int população;
    float km²;
    float pib;
    int turismo;
    
    ptintf("digete o nome da carta1: \n:");
    scanf("%s, &carta1");

    printf("digete o nome do estado: \n:");
    scanf("%s, &estado ");

    printf("digite o código \n:");
    scanf("%f, código");

    printf("digete o nome da cidade \n:");
    scanf("%s, &cidade");

    printf("digite a população \n:");
    scanf("%d, &população");
²
    printf("área em km \n:");
    scanf("%d, &km");
;
    printf("digete o pib \n:");
    scanf("%d, &pib");

    printf("pontos turisticos são 20 \n:");
    scanf("%f, &turistico");

    printf("nome da carta1: %s -\n", carta1 );
    printf("nome do estado: %s -\n", estado );
    printf("nome do codigo: %f -\n", código );
    printf("nome da cidade: 5S \n", cidade );
    printf("quantidade da população: %d \n", população );
    printf("digete a área em km²: %d \n", km² );
     




    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
