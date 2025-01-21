#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    char Pais [30] =  "Brasil";
    char Estado[30] = "Bahia";
    char Codgo [31] = "A01";
    char cidade [30] = "Barrairas";
    int Populacao =  165.000;
    double Area = 12.3084;
    double Pib = 12.000;
    int Pontos = 5;
 
    printf("Digite o nome do País\n");
    scanf("%c", Pais);

    printf("País: %s\n", Pais);
    
    
    printf("Estado: %s\n", Estado);


    printf("Cidade: %s\n", cidade);
    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
