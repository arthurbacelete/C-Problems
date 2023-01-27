// Library: 
#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <stdlib.h> 
#include <ctype.h> 
// Constants: 
#define SUCESSO 0 
#define MAX 1000

// Arthur Bacelete
// Colégio Técnico da UFMG 

int main () { 
    char s[MAX]; 
    int size, i;  

    // O usuário entra com a string: 
    fgets(s, MAX, stdin); 
    size = strlen(s);

    for (i = 0; i < size; i++) {
        // Se houver espaço, dá uma quebra de linha: 
        if (s[i] == ' ') {
            printf("\n"); 
        } 
        // Caso não, imprime normalmente. 
        else { 
            printf("%c", s[i]);
        }
    } 

    return SUCESSO; 
}