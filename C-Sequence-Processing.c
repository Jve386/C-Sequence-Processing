#define _CRT_SECURE_NO_WARNINGS
        # include <stdio.h>
        # include <stdbool.h>
        # include <stdlib.h>  
 
        
    void numeros(int n1, int n2); 
    void posicion(int p1, int p2, float pmedia);
    void toleranciaf(float tolmin, float tolmax, float tol, float mediat);
    void ambosarrays(int a1, int a2, float atolmax, float atolmin);
        
		int main(){
			int num[10];
			int suma = 0;
			float media = 0;
      int i;
      float tolerancia = 0.0;
      float toleranciamax = 0.0, toleranciamin = 0.0;
            
			
			for (i = 0; i < 10; i++)
			{
			    printf("Introduce el entero numero %d: ", i+1);
				scanf("%d", &num[i]);{if(num[i]==-1) {break;}}
				suma = suma + num[i];
				
			}
 
          printf("\n **********FUNCION QUE MUESTRA LOS NUMEROS INTRODUCIDOS:********** \n");
          for (i = 0; i < 10; i++){
            numeros(i, num[i]);{if(num[i]==-1) {break;}}
		        }
          
			
			media = (float) suma / i;
			
			
			printf("\n La suma de los números introducidos es: %d \n", suma);
			printf("\n Y la media de estos es: %f \n", media);
			
			printf("\n **********FUNCION QUE MUESTRA LOS NUMEROS INTRODUCIDOS QUE ESTAN POR ENCIMA DE LA MEDIA:********** \n");
			for (i = 0; i < 10; i++){
			    posicion(i, num[i], media);{if(num[i]==-1) {break;}}
		      }
			
            
            
      printf("Indica cual es la tolerancia respecto a la media?\n");
			scanf("%f", &tolerancia);
			
			printf("\n **********FUNCION QUE A PARTIR DE LA TOLERANCIA INTRODUCE LO NECESARIO EN UN SEGUNDO ARRAY:********** \n");
 
			toleranciaf(toleranciamin, toleranciamax, tolerancia, media);
			
			printf("\n **********FUNCION QUE MUESTRA LO INTRODUCIDO EN AMBOS ARRAYS:********** \n");
			tolerancia = media * tolerancia;
			toleranciamax = media + tolerancia;
		  toleranciamin = media - tolerancia;
			
			for (i = 0; i < 10; i++){
		  ambosarrays(i, num[i], toleranciamax, toleranciamin);{if(num[i]==-1) {break;}}
			}
			
			
			system("pause");
			return 0;
		}
		
		
 
      void numeros(int n1, int n2){
        printf("numero %d : %d \n", n1 ,n2);
	      }
	      
	     
	    void posicion(int p1, int p2, float pmedia){
	      if (pmedia < p2){
				printf("\n Numero en posicion %d : %d por encima de la media. \n", p1,p2);
			    } else {
			        printf("\n Numero en posicion %d : %d por debajo de la media. \n", p1,p2);}
			    
	     }
	     
	     
	     void toleranciaf(float tolmin, float tolmax, float tol, float mediat){
	        tol = mediat * tol;
			    tolmax = mediat + tol;
		      tolmin = mediat - tol;
	       printf("Introduce valores comprendidos entre %f y %f \n", tolmin,tolmax);
	     }
	     
	     
	     void ambosarrays(int a1, int a2, float atolmax, float atolmin){ 
	        if (atolmax >  a2 && atolmin < a2){
			         printf("numero %d : %d segundo Array %d : %d \n", a1,a2,a1,a2);
			    }else{
			         printf("numero %d : %d segundo Array %d : 0 \n", a1,a2,a1);
			    }
	     }
