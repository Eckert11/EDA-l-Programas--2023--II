#define FIL 8
#define COLS 8

#include <stdio.h>
#include <stdlib.h>

int opcion;
int main(){
	int a, b, i, j; 
    //int tablero[8][8]; 
    int **tablero;
    tablero=(int **)malloc(FIL*sizeof(int *));
    
    for(i=0;i<FIL;i++){
        tablero[i]=(int *)malloc(COLS*sizeof(int));
    }
    
 short opcion=0;
 while (1){
 printf("\n\t*** Movimientos del alfil y de la torre***\n");
 printf("Elija una de las siguientes opciones\n");
 printf("1) Alfil.\n");
 printf("2) Torre.\n");
 printf("3) Salir.\n");
 scanf("%d", &opcion);
 switch(opcion){
 case 1:
 printf("Has seleccionado alfil\n");
 printf("Ingresa las coordenadas en donde se encuentra el alfil (x,y): ");
 scanf("%d, %d",&a,&b);
 // cerrar toda la matriz 

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){ 
            tablero[i][j]=0; 
        
        };
    }; 
    
    
// cargar las posiciones por la que puede pasar el alfil        
    
           for (int i=a, j=b; (i<8&&j>=0); i++, j--) {
    tablero[i][j]=1;                
}

for (int i=a, j=b; (i>=0&&j<8); i--, j++){
    tablero[i][j]=1; 
}

for (int i=a, j=b; (i<8&&j<8); i++, j++){
    tablero[i][j]=1; 
}

for (int i=a, j=b; (i>=0&&j>=0); i--, j--){
    tablero[i][j]=1; 
}
                     

    tablero[a][b]=7; // la posicion del alfil 
    
// impresion del tablero de ajedrez 
    
    printf("El alfil esta en %d, %d\n", a, b);  
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){ 
                if(tablero[i][j]==0){
                    printf("*\t"); 
                }; 
                if(tablero[i][j]==1){
                    printf("P\t");
                }; 
                if(tablero[i][j]==7){
                    printf("A\t");
                }; 
        }; 
            printf("\n\n"); 
    };  
 
 break;
 case 2:
 printf("Has seleccionado torre\n");
 printf("Ingrese las coordenadas en donde se encuentra la torre (x,y): ");
 scanf("%d, %d",&a,&b);
 // cerar toda la matriz 

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){ 
            tablero[i][j]=0; 
        
        };
    }; 
    
    
// cargar las posiciones por la que puede pasar la torre        
    
         for (int i=a, j=b; (i<8&&j>=0); i++, j--) {
    tablero[a][j]=1;              
	tablero[i][b]=1;    
}

for (int i=a, j=b; (i>=0&&j<8); i--, j++){
    tablero[a][j]=1; 
    tablero[i][b]=1; 
}

for (int i=a, j=b; (i<8&&j<8); i++, j++){
    tablero[i][b]=1; 
    tablero[a][j]=1; 
}

for (int i=a, j=b; (i>=0&&j>=0); i--, j--){
    tablero[i][b]=1; 
    tablero[a][j]=1; 
}
                     

    tablero[a][b]=7; // la posicion de la torre  
    
// impresion del tablero de ajedrez 
    
    printf("La torre esta en %d, %d\n", a, b);  
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){ 
                if(tablero[i][j]==0){
                    printf("*\t"); 
                }; 
                if(tablero[i][j]==1){
                    printf("P\t");
                }; 
                if(tablero[i][j]==7){
                    printf("T\t");
                }; 
        }; 
            printf("\n\n"); 
    };  
 break;
 case 3:
 return 0;
 default:
 printf("Opción no válida.\n");
 }
 }
 return 0;
}