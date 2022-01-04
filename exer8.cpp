/*Considere listas que armazenam inteiros e implemente uma função para testar se duas listas passadas como parâmetros são iguais. Essa função deve conter o seguinte cabeçalho:
Int igual (PtrNo * l1, PtrNo * l2);*/
#include <stdio.h>
#include <stdlib.h>

struct No{
  int dados;
  struct No * prox;
};typedef struct No * ptrNo;

int igual(ptrNo *l1, ptrNo *l2){
  int cont=0;
  ptrNo aux= (struct No*)malloc(sizeof(struct No));
  aux=*l1;
  ptrNo aux2= (struct No*)malloc(sizeof(struct No));
  aux=*l2;
  //if(aux->dados != aux2->dados) return 0;
  while(aux!=NULL && aux2!= NULL){
    if(aux->dados==aux2->dados){
      cont++;
    }
    aux=aux->prox;
    aux2=aux->prox;
  }
  return cont;
}

int main(void) {
  printf("Hello World\n");
  return 0;
}