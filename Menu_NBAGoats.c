#include <stdio.h>

int main(){
	
	int eleccion;
	
	do {
	printf("Bienvenidos al mejor programa de la NBA \nNBA GOATs\n");
	printf("1. Informacion acerca de los jugadores\n");
	printf("2. Rellena tu bracket de los playoffs\n");
	printf("3. Elige tus premios all star\n");
	printf("4. Salir del programa\n");
	
	scanf("%d", &eleccion);
	}while (eleccion > 4 || eleccion <=0);
	
	switch (eleccion){
		case 1:
				printf("Estos son los jugadores que quieres ver\n");
			break;
		
		case 2:
				printf("Estos son los playoffs\n");
			break;
		
		case 3:
			printf("Tu all star sera...\n");
			break;
		
		case 4: 
			printf("Adios\n");
			break;
		
	}
}
