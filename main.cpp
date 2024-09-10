#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* criarVetor(int tamanho) {
  int* vetor = (int*) malloc(tamanho * sizeof(int));
  srand(time(NULL)); // Inicializa o gerador de números aleatórios
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = rand() % 50 + 1; // Gera um número aleatório entre 1 e 50
  }
  return vetor;
}

int main() {
  int tamanho;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);
  int* vetor = criarVetor(tamanho);
  printf("Vetor gerado:\n");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
  free(vetor); // Libera a memória alocada pelo vetor
  return 0;
}
