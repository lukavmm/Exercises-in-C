#include <stdio.h>
#include <string.h>
/*Dado o arquivo CADASTRO com registros com os campos NOME, SEXO, COR-DOS-OLHOS, ALTURA, PESO e DATA- DE-NASCIMENTO, separá-lo em dois arquivos: um chamado HOMEM, com os registros cujo campo SEXO apresente o valor 1 (sexo masculino) e o outro chamado MULHERES, com os registros cujo campo SEXO seja igual a 2 (sexo feminino). Os registros dos novos arquivos deverão possuir os seguintes campos: NOME, COR-DOS-OLHOS, PESO e DATA-DE-NASCIMENTO.*/
struct cad{
  char nome[20];
  int sexo;
  char olhos[20];
  float altura,peso;
  char data[11];
};
int main(void) {
  
  struct cad cadastro={"lucas",1,"azul",1.70,80,"08/10/2001"};
  FILE *f;
  int p=10;
  f=fopen("cadastro.dat","rb");
  if(f==NULL){
    printf("ERROR!!");
    return 1;
  }else{
    FILE *h;
    FILE *m;
    h=fopen("homem.txt","w");
    if(h==NULL){
    printf("ERROR!");
    return 1;
    }
    m=fopen("mulher.txt","w");
    if(m==NULL){
    printf("ERROR!");
    return 1;
    }
     int aux=fread(&cadastro,sizeof(struct cad),1,f);
    while(aux!=feof(f)){
      if(cadastro.sexo=='1'){
        fprintf(h,"%s %d %s %.2f %.2f %s",cadastro.nome,cadastro.sexo,cadastro.olhos,cadastro.altura,cadastro.peso,cadastro.data);
      }
      if(cadastro.sexo=='2'){
        fprintf(m,"%s %d %s %.2f %.2f %s",cadastro.nome,cadastro.sexo,cadastro.olhos,cadastro.altura,cadastro.peso,cadastro.data);
      aux=fread(&cadastro,sizeof(struct cad),1,f);
    }
  
  }}
  return 0;

}