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
    int cnt, n, arr[MAX], rev[MAX], aux;

    scanf("%d", &n); 
    aux = n - 1;

    // Guarda os valores: 
    for (cnt = 0; cnt < n; cnt++) {
        scanf("%d", &arr[cnt]); 
    }

    //Imprime-os ao contrário: 
    for (cnt = 0; cnt < n; cnt++) {
        rev[cnt] = arr[aux];
        aux--; 
        printf("%d ", rev[cnt]); 
    }



    return SUCESSO; 
}