/*Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia elétrica em uma determinada cidade.
Para isso, são fornecidos os seguintes dados:
- preço do kWh consumido;
- número do consumidor;
- quantidade de kWh consumidos durante o mês;
**O número do consumidor igual a zero deve ser usado para interromper a entrada de dados.** 
Faça um programa que leia os dados descritos acima, calcule e imprima:
a) para cada consumidor o total a pagar,
b) o maior consumo verificado,
c) o menor consumo verificado,
d) a média geral de consumo.*/
#include <stdio.h>
int main(void) {
  
 float preçokw,kwm,menor=9999,maior=-9999,media,total,soma=0;
 int cod,m=0;

 while(1){
   printf("digite o codigo do consumidor:");
   scanf("%d",&cod);
   if(cod>0){
     m++;
   }
   if(cod==0){
     break;
   }
   printf("digite o preço do KW/h: ");
   scanf("%f",&preçokw);
   printf("digite os KW consumidos no mês: ");
   scanf("%f",&kwm);
   if(kwm>maior){
     maior=kwm;
   }
   if(kwm<menor){
     menor=kwm;
   }
    soma=soma+kwm;
    media=soma/m;
    total=preçokw*kwm;
    printf("o consumidor %d tem que pagar  é: %.2f\n",cod,total);
  }
  printf("o total é: %.2f\n",total);
  printf("o maior é: %.2f\n",maior);
  printf("o menor é: %.2f\n",menor);
  printf("a media é: %.2f\n",media);
  return 0;
}