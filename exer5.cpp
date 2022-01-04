/*Leia uma matriz 15 x 6. Leia também um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou
uma mensagem de “não encontrado”.*/
#include <stdio.h>
int main(void) {
  int mat[5][3],x,posL,posC,achado=1;

  for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
      printf("digite a matriz: ");
      scanf("%d",&mat[i][j]);
    }
  }
  printf("digite o valor de X: ");
  scanf("%d",&x);
  
  for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
      if(mat[i][j]==x){
        achado=0;
        posL=i;
        posC=j;
      }
    }
  }
  
  if(achado==0){
    printf("linha: %d coluna: %d",posL,posC);
  }
  else{
    printf("ERROR");
  }
  return 0;
}