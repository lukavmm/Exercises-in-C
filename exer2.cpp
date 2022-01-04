#include <stdio.h>
#include <stdlib.h>
struct No
{
  char sexo;
  int pontos;
  struct No *prox;
};
typedef struct No* PtrNo;

int main(void)
{
  int pontos;
  char sexo;

  PtrNo lista = NULL;

  printf("Informe a qtd de pontos ou -1 para sair:");
  scanf("%d",&pontos);
  while (pontos >= 0)
  {
    printf("Informe o sexo (f/m):");
    scanf("%c",&sexo);

    PtrNo user  = (struct No*) malloc(sizeof(struct No));
    user->sexo = sexo;
    user->pontos = pontos;
    user->prox = lista;
    lista = user;

    printf("Informe a qtd de pontos ou -1 para sair:");
    scanf("%d",&pontos);
  }

  int qtdMaior14 = 0, qtdSemMultas = 0, qtdMulheres14 = 0, cont=0;

  PtrNo aux = lista;
  while (aux != NULL)
  { 
    cont++;
    if (aux->pontos > 14)
    {
      qtdMaior14++;
      if (aux->sexo=='f')
        qtdMulheres14++;
    }
    if (aux->pontos == 0)
    {
      qtdSemMultas++;    
    }
  }
  float perc = 0;
  if (cont>0)
   perc = qtdMulheres14 *100.0/cont;

  printf("Qtd pessoas com pontos acima de 14: %d",qtdMaior14);
  printf("Qtd pessoas sem pontos: %d",qtdSemMultas);
  printf("Porcentagem de mulheres com mais de 14 pontos: %.2f",perc);

  return 0;
}