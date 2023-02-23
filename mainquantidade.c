#include <stdio.h>

#include <stdlib.h>

int main() {

  int qtdAlunos, i;

  float *notas, soma, media;

  printf("Digite a quantidade de alunos: "); scanf("%d", &qtdAlunos);

  notas = (float *) malloc(sizeof(float) * qtdAlunos+1);

  for(i=0; i<qtdAlunos; i++){

      printf("Informe a nota do aluno (%d): ", i+1);

      scanf("%f", &notas[i]);

  }

  soma = 0;

  for(i=0; i<qtdAlunos; i++){

      soma = soma + notas[i];

  }

  free(notas);

  media = soma/qtdAlunos;

  printf("\nA media dos alunos eh %.2f!\n", media);

  return 0;

}
