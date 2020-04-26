//SOLUCION NUMERO PRIMO

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void solucion1(int numero);
void solucion2(int numero);
void solucion3(int numero);
void solucion4(int numero);


void solucion3a(int numero);

int main(){
    int numero;
    system("color f0");
    printf("Digite numero: ");
    scanf("%i",&numero);
    printf("\n");
    
    
    solucion1(numero);
    solucion2(numero);
    solucion3a(numero);
    solucion4(numero);
                            
    //printf("Hola mundo %i.\n ",cantidadDiv);
    
    getch();   
}

void solucion1(int numero){
     
    int cantidadDiv=0,j,numOperaciones=0;
    

    for(j=1;j<=numero;j++){
       numOperaciones=numOperaciones+1;                    
       if(numero%j==0){
       cantidadDiv=cantidadDiv+1;
       }           
    }
    if(cantidadDiv==2){
      printf("Es primo \n");
    }else{
      printf("No es primo \n");
    }
    printf("Numero operaciones: %i\n \n",numOperaciones);                
    return; 
}     

void solucion2(int numero){
     int k=2,numOperaciones=0;
     bool esPrimo=true;
     
     while(esPrimo && k<numero){
          numOperaciones=numOperaciones+1;         
          if(numero%k==0){
             esPrimo=false;
          }else{
               k=k+1;
          }
     }
     
     if(esPrimo && numero !=1){
        printf("es primo \n");
     }else{
        printf("no es primo \n"); 
     }
     printf("Numero operaciones: %i \n \n",numOperaciones);
     return;
}

void solucion3(int numero){
     int k=2,j=2,numOperaciones=0;
     bool esPrimo=true;
     
     
     while(esPrimo && j<=(numero/2)){
          numOperaciones=numOperaciones+1;         
          if(numero%j==0){
             esPrimo=false;
          }else{
               j=2*k-1; 
               k=k+1; 
          }
     }
     
     if(esPrimo && numero !=1){
        printf("es primo \n");
     }else{
        printf("no es primo \n"); 
     }
     printf("Numero operaciones: %i \n \n",numOperaciones);
     return;
}

void solucion4(int numero){
     int k=2,j=2,numOperaciones=0;
     bool esPrimo=true;
     
     while(esPrimo && j<=(sqrt(numero))){
          numOperaciones=numOperaciones+1;         
          if(numero%j==0){
             esPrimo=false;
          }else{
               j=2*k-1; 
               k=k+1; 
          }
     }
     
     if(esPrimo && numero !=1){
        printf("es primo \n");
     }else{
        printf("no es primo \n"); 
     }
     printf("Numero operaciones: %i \n \n",numOperaciones);
     return;
}


///////////////////////////////


void solucion3a(int numero){
    int k=3,numOperaciones=0;
     bool esPrimo=true;
     
     while(esPrimo && k<(numero/2)){
          numOperaciones=numOperaciones+1;         
          if(numero%k==0  || numero%2==0){
             esPrimo=false;
          }else{
               k=k+2;
          }
     }
     
     if(esPrimo && numero !=1){
        printf("es primo \n");
     }else{
        printf("no es primo \n"); 
     }
     printf("Numero operaciones: %i \n \n",numOperaciones);
     return;
}


