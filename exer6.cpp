/*Faça um programa que lê duas matrizes de números inteiros, M1 e M2, ambas de
tamanhos 10x10. Após isso, o programa deve criar e imprimir a matriz S, resultante
da soma de cada elemento de M1 com elementos de M2.*/
#include <stdio.h>

int main(void) {
  
  int mat[2][2],mat2[2][2],s[2][2];

  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("digite [%d][%d] da matriz1: ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("digite [%d][%d] da matriz2: ",i,j);
      scanf("%d",&mat2[i][j]);
    
     s[i][j]=mat[i][j]+mat2[i][j];
    }
  }
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("%d\t",s[i][j]);
    
    }
    printf("\n");  
  }




  return 0;
}