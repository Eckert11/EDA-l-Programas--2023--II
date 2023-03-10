#include<stdio.h>

int opcion;
int main(){
	int a, b, i, j,c=0,d; 
    int tablero[8][8]; 
    
 short opcion=0;
 while (1){
 printf("\n\t*** Movimientos de Rey  y Reina***\n");
 printf("Elija una de las siguientes opciones\n");
 printf("1) Reina.\n");
 printf("2) Rey.\n");
 printf("3) Salir.\n");
 scanf("%d", &opcion);
 switch(opcion){
 case 1:
 printf("Has seleccionado Reina\n");
 printf("Ingresa las coordenadas en donde se encuentra la Reina (x,y): ");
 scanf("%d, %d",&a,&b);
 // cerrar toda la matriz 

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){ 
            tablero[i][j]=0; 
        
        };
    }; 
    
    
// cargar las posiciones por la que puede pasar la reina      
    
           for (int i=a, j=b; (i<8&&j>=0); i++, j--) {
    tablero[i][j]=1;       
    tablero[a][j]=1; 
    tablero[i][b]=1;         
}

for (int i=a, j=b; (i>=0&&j<8); i--, j++){
    tablero[i][j]=1; 
    tablero[a][j]=1; 
    tablero[i][b]=1;
}

for (int i=a, j=b; (i<8&&j<8); i++, j++){
    tablero[i][j]=1; 
      tablero[a][j]=1; 
    tablero[i][b]=1;
}

for (int i=a, j=b; (i>=0&&j>=0); i--, j--){
    tablero[i][j]=1; 
    tablero[a][j]=1; 
    tablero[i][b]=1;
}
                     

    tablero[a][b]=7; // la posicion de la reina
    
// impresion del tablero de ajedrez 
    
    printf("L en %d, %d\n", a, b);  
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){ 
                if(tablero[i][j]==0){
                    printf("*\t"); 
                }; 
                if(tablero[i][j]==1){
                    printf("P\t");
                }; 
                if(tablero[i][j]==7){
                    printf("Q\t");
                }; 
        }; 
            printf("\n\n"); 
    };  
 
 break;
 case 2:
 printf("Has seleccionado Rey\n");
 printf("Ingrese las coordenadas en donde se encuentra el Rey (x,y): ");
 scanf("%d, %d",&a,&b);
 // cerar toda la matriz 

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){ 
            tablero[i][j]=0; 
        
        };
    }; 
    
    
// cargar las posiciones por la que puede pasar el Rey       
    
         for (int i=a, j=b, c=0; (i<8&&j>=0&&c<=1); i++, j--,c++) {
    tablero[i][j]=1;    	
    tablero[a][j]=1;              
	tablero[i][b]=1;    
		}
   for (int i=a, j=b, c=0; (i>=0&&j<8&&c<=1); i--, j++,c++){
    tablero[i][j]=1; 
    tablero[a][j]=1; 
    tablero[i][b]=1;
}

		for (int i=a, j=b, c=0; (i<8&&j<8&&c<=1); i++, j++,c++){
	tablero[i][j]=1;
    tablero[i][b]=1; 
    tablero[a][j]=1; 
		}

		for (int i=a, j=b, c=0; (i>=0&&j>=0&&c<=1); i--, j--,c++){
	tablero[i][j]=1;
    tablero[i][b]=1; 
    tablero[a][j]=1; 
		}
                     

    tablero[a][b]=7; // la posicion de el Rey
    
// impresion del tablero de ajedrez 
    
    printf("El rey esta en %d, %d\n", a, b);  
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){ 
                if(tablero[i][j]==0){
                    printf("*\t"); 
                }; 
                if(tablero[i][j]==1){
                    printf("P\t");
                }; 
                if(tablero[i][j]==7){
                    printf("K\t");
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
    