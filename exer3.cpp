/*Considere uma lista encadeada que armazena notas e nomes de alunos de uma turma. Implemente uma função para calcular e retornar a média dos alunos. Tal função deve receber como parâmetro a lista e retornar a média. Essa função deve conter o seguinte cabeçalho:
float media (PonteiroNo l1);*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No{
 float notas;
 char nome[40];
 struct No*prox;
};typedef struct No*PtrNo;

float cal_med(PtrNo *l1){
  PtrNo aux= (struct No*)malloc(sizeof(struct No));
  aux=*l1;
  float media=0;int soma=0;int cont=0;
  while(aux!=NULL){
    cont++;
    soma=soma+ aux->notas;
    aux=aux->prox;
  }
  media=soma/cont;
  return media;
}


int main(void) {
  printf("Hello World\n");
  return 0;
}