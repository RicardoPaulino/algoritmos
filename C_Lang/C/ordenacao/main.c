#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *V, int N){
    int i, j, temp;
    for(i = 0; i < N-1; i++){
        for(j = 0; j < N-i-1; j++){
            if(V[j] > V[j+1]){
                temp = V[j];
                V[j] = V[j+1];
                V[j+1] = temp;
            }
        }
    }
}

void main(){
    int N, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    
    int *V = (int *)malloc(N * sizeof(int));
    
    printf("Digite os elementos do vetor:\n");
    for(i = 0; i < N; i++){
        scanf("%d", &V[i]);
    }
    
    clock_t start = clock();
    bubbleSort(V, N);
    clock_t end = clock();
    
    
    double time_taken_ms = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
    printf("Tempo de execução: %.8f milissegundos\n", time_taken_ms);
    
    printf("Vetor ordenado:\n");
    for(i = 0; i < N; i++){
        printf("%d ", V[i]);
    }
    
    free(V);
}