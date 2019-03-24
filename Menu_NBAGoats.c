#include <stdio.h>

int main(){
	
	int eleccion;
	
	
		printf("\t***NBA GOATs***\n\nBienvenidos al mejor programa de la NBA\n\n");
	printf("1. Informacion acerca de los jugadores\n");
	printf("2. Rellena tu bracket de los playoffs\n");
	printf("3. Elige tus premios all star\n");
	printf("4. Salir del programa\n\n");
	
	
	do {
	
	printf("Elige una opcion para continuar:\n");
	
	scanf("%d", &eleccion);
	}while (eleccion > 4 || eleccion <=0);
	
	switch (eleccion){
		case 1:
				printf("Vamos a buscar a tu jugador favorito!\n");
			break;
		
		case 2:
				printf("Empieza a rellenar tu bracket:\n");
			break;
		
		case 3:
			printf("Con que premio quieres comenzar?\n");
			break;
		
		case 4: 
			printf("Adios,vuelve pronto!\n");
			break;
		
	}
	
	return 0;
}
