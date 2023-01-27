// Bibliotecas
#include <stdio.h> 
#include <math.h> 
#include <string.h> 
#include <stdlib.h> 
// Constantes: 
#define SUCESSO 0
#define MAX 100

// Arthur Bacelete
// Colégio Técnico da UFMG


int main() {
    char number[MAX], reverse[MAX];
    int i, j, size; 

    // O usuário entra com um número qualquer: 
    scanf("%s", number); 
    size = strlen(number);
    j = size - 1;
    
    // Aqui, gera-se um vetor ao contrário. 
    for (i = 0; i < size; i++) {
        reverse[i] = number[j];
        j--;
    }

    // Aqui faz a comparação das strings, se igual, é um palíndromo. 
    if (strcmp(reverse, number) == 0) {
        printf("true"); 
    } else {
        printf("false"); 
    }

    return SUCESSO; 
}