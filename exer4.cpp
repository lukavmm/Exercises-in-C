/*Escreva um programa que lê uma matriz 3x3. Depois atribua 0 para os valores
abaixo da diagonal principal da matriz. Imprima a matriz
modificada.*/
#include <stdio.h>

int main(void) {
  
  int mat[3][3];

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("digite a matriz: ");
      scanf("%d",&mat[i][j]);
      if(i>j){
        mat[i][j]=0;
      }
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d\t",mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}