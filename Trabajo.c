#include <stdio.h>
#include <stdlib.h>

// Estructura para escribir los nombres de todos los equipos.
typedef struct{
	char nombre[50];
}equipos;

int main(){
	FILE *pf;
	int eleccion;
	int conf,div;
	
	int i;
	
	FILE *pe;
	FILE *po;
	
	equipos cole[50];
	
	printf("\t***NBA GOATs***\n\nBienvenidos al mejor programa de la NBA\n\n");
	printf("1. Jugadores por equipo\n");
	printf("2. Rellena tu bracket de los playoffs\n");
	printf("3. Elige tus premios all star\n");
	printf("4. Salir del programa\n\n");
	
	// Vamos a ver que eleccion quiere el usuario para usar el programa.
	do {
	printf("Elige una opcion para continuar:\n");
	scanf("%d", &eleccion);
	}while (eleccion > 4 || eleccion <=0);
	
	switch (eleccion){
		case 1:
			system ("cls");
			printf("Vamos a buscar a tu jugador favorito!\n");
			do{
				printf("Te vamos a mostar las dos conferencias que hay en la NBA, cada una con 15 equipos\n");
				printf("Elige una de las dos:\n(1)Oeste\n(2)Este\n");
				scanf("%d", &conf);
			}while (conf < 1 || conf>2);
			
			system ("cls");
			printf("Bien! Ahora te vamos a mostar los equipos de la conferencia escogida\n");
	
			switch (conf){
				case 1:
					po = fopen("oeste.txt","r");
					while(fscanf(po,"%[^\n]\n",cole[i].nombre) != EOF)
    				i++;
    
					for (i=0;i<15;i++){
						printf("%i. %s\n",i+1,cole[i].nombre);
					}
					
				break;
		
				case 2:
					pe = fopen("este.txt","r");
					while(fscanf(pe,"%[^\n]\n",cole[i].nombre) != EOF)
    				i++;
   
					for (i=0;i<15;i++){
						printf("%i. %s\n",i+1,cole[i].nombre);
					}
					break;
			}
		break;
			
		case 2:
			system ("cls");
				printf("Empieza a rellenar tu bracket:\n");
			break;
		
		case 3:
			system ("cls");
			printf("Con que premio quieres comenzar?\n");
			break;
		
		case 4: 
			system ("cls");
			printf("Adios,vuelve pronto!\n");
			break;
		
	}
	
	return 0;
}
