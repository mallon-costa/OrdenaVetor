#include <stdio.h>
#define TAM 4

void ordenaVetor(double vetor[TAM]){
    double vetorAux[TAM], decrescente[TAM];
    double aux = 0;
    int i, j, k;

    for(i = 0; i < TAM; i++){
        for ( j = 0; j < TAM; j++){
            if(aux < vetor[j]){
                aux = vetor[j];
            }
            vetorAux[i] = aux;
        }
        for(k = 0; k < TAM; k++){
            if(aux == vetor[k]){
                vetor[k] = 0;
            }
        }
        aux = 0;
    } 

    for(i = 0; i < TAM; i++){
        decrescente[i] = vetorAux[i];
    }

    for(i = 0, j = TAM-1; i < TAM, j >= 0; i++, j--){
        vetorAux[i] = decrescente[j];
    }

    for (i = 0; i < TAM; i++){
        printf("\n%.2f", vetorAux[i]);
    }

}

int main(){
    double vetor[TAM];

    printf("\nAlimentacao do vetor: ");
	int i;
    for (i = 0; i < TAM; i++) {
        printf("\nElemento[%d]: ",i);
        scanf("%lf", &vetor[i]);
    }
    
    ordenaVetor(vetor);

}
