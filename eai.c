#include <stdio.h>


void preencheMatriz(){

  int i=0;
  int j=0;


    int mat1 [12][12];
    int mat2 [12][12];

    int zero=0;
    
    //preencher matriz m1;

    for(i=0;i<9;i++){
          for(j=0;j<10;j++){
              scanf("%d",&mat1[i][j]);
          }
    } 

     //imprimir matriz m1 com zero "0" em todas suas posições;

     for(i=0;i<9;i++){
          for(j=0;j<10;j++){
            if (mat1[i][j]>=0){
                 mat1[i][j]=0;
            } 
               printf("%d ",mat1[i][j]);
          }printf("\n");
          }

  
     }






int main () {

  //--> preencheMatriz(); // Função usada para preencher e imprimir a matriz inicial com "0" em todas as suas posições. 

  
  
  return 0;
}

// teste de como fazer um PULL REQUEST


