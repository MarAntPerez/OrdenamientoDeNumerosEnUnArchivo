#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int TAMANIOARREGLO = 9;
	const int TAMANIOTEXTO = (TAMANIOARREGLO*2)+1;
	char texto[TAMANIOTEXTO];
	int numerosDesordenados[TAMANIOARREGLO];
	
	FILE *puntero;
	int i;
	
	if (!(puntero = fopen("NumerosDesordenados.txt", "r"))){
		printf("Error");
		exit(0);
	}else{
		fgets(texto,TAMANIOTEXTO,puntero);
		//printf("%s", texto);
		fclose(puntero);
	}
	
	int j = 0;
	
	for(i = 0; i < TAMANIOTEXTO; i++){
		//printf("%c", texto[i]);
		if (texto[i] != ',' && texto[i] != 00){
			numerosDesordenados[j] = texto[i] - '0';
			//printf(" \nDato guardado %i\n", numerosDesordenados[j]);
			//printf("Dato Obtenido %c\n", texto[i]);
			j++;
		}
	}
	
	j = 0;
	
	/*for(j = 0; j < TAMANIOARREGLO; j++){
		printf("%i", numerosDesordenados[j]);
	}*/
	
	i = 0;
	j = 0;
	int valorTemporal;
	int existeIntercambio = 0;
	int contadorIntercambios = 0;
	int contadorFor = 1;
	
	
	while(existeIntercambio == 0){
	contadorIntercambios = 0;
	
		contadorFor++;
		
		for (i = 0; i < TAMANIOARREGLO; i++){
			
			if(numerosDesordenados[i] > numerosDesordenados[i+1]){
			 valorTemporal =numerosDesordenados[i];
			 numerosDesordenados[i] = numerosDesordenados[i+1];
			 numerosDesordenados[i+1] = valorTemporal;
			 contadorIntercambios++;
			 
			}else{
			
			}
	    }
	       
	    if(contadorIntercambios == 0){
		  existeIntercambio = 1; //1 significa no surgio intercambio
		}
		
	}
	
	printf("Numero de iteraciones: %i\n", contadorFor-1);
	

		for(j == 0; j <= TAMANIOARREGLO; j++){
			printf("%i ", numerosDesordenados[j]);
		}
	
	return 0;
}
