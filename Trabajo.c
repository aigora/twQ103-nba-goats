#include <stdio.h>
#include <stdlib.h>

void infojugadoreseste();
void infojugadoresoeste();

// Estructura para escribir los nombres de todos los equipos.
typedef struct{
	char nombre[50];
}equipos;

typedef struct{
	char nombre[500];
	char posicion[500];
	char equipo[500];
	float puntos;
	float asistencias;
	float rebotes;
}jugador;

int main(){
	FILE *pf;
	int eleccion;
	int conf,xx;
	
	
	int i,equipo;
	
	FILE *pe;
	FILE *po;
	FILE *pj;
	
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
					
					infojugadoresoeste();
					
				break;
		
				case 2:
					pe = fopen("este.txt","r");
					while(fscanf(pe,"%[^\n]\n",cole[i].nombre) != EOF)
    				i++;
   
					for (i=0;i<15;i++){
						printf("%i. %s\n",i+1,cole[i].nombre);
					
					}
					
					infojugadoreseste(xx=0);
					
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

void infojugadoreseste(int xx){
	
	FILE *pj;
	
	int i,equipo,g;
	
	jugador cr[500];
	g=0;
	
	pj = fopen("eeste.txt","r");
	
	while(fscanf(pj,"%[^;];%[^;];%f;%f;%f;%[^\n]\n",
    cr[i].nombre,
    cr[i].posicion,
    &cr[i].puntos,
    &cr[i].asistencias,
	&cr[i].rebotes,
	cr[i].equipo) != EOF)
    i++;
    
    printf("\nEscribe el equipo que quieres que se vea: ");
    scanf("%d", &equipo);
    system("cls");
    printf("Estos son los jugadores\n");

    for (i=equipo*5-5;i<equipo*5;i++){
		printf("\n%d. %s\n",g+=1,cr[i].nombre);
	}
	
	do {
	printf("\nElige a tu jugador preferido:");
	scanf("%d", &xx);
	} while (xx>5 || xx<1);
	
	system("cls");
	
	printf("Estas son las estadisticas buscadas:\n");
	printf("\nNombre: %s\nPosicion: %s\nPuntos: %.2f\nAsistencias: %.2f\nRebotes: %.2f\n",cr[equipo*5-6+xx].nombre, cr[equipo*5-6+xx].posicion,cr[equipo*5-6+xx].puntos,cr[equipo*5-6+xx].asistencias,cr[equipo*5-6+xx].rebotes);
}

void infojugadoresoeste(int xx){
	
	FILE *pj;
	
	int i,equipo,g;
	
	jugador cr[500];
	g=0;
	
	pj = fopen("eoeste.txt","r");
	
	while(fscanf(pj,"%[^;];%[^;];%f;%f;%f;%[^\n]\n",
    cr[i].nombre,
    cr[i].posicion,
    &cr[i].puntos,
    &cr[i].asistencias,
	&cr[i].rebotes,
	cr[i].equipo) != EOF)
    i++;
    
    printf("\nEscribe el equipo que quieres que se vea: ");
    scanf("%d", &equipo);
    system("cls");
    printf("Estos son los jugadores\n");

    for (i=equipo*5-5;i<equipo*5;i++){
		printf("\n%d. %s\n",g+=1,cr[i].nombre);
	}
	
	do {
	printf("\nElige a tu jugador preferido:");
	scanf("%d", &xx);
	} while (xx>5 || xx<1);
	
	system("cls");
	
	printf("Estas son las estadisticas buscadas:\n");
	printf("\nNombre: %s\nPosicion: %s\nPuntos: %.2f\nAsistencias: %.2f\nRebotes: %.2f\n",cr[equipo*5-6+xx].nombre, cr[equipo*5-6+xx].posicion,cr[equipo*5-6+xx].puntos,cr[equipo*5-6+xx].asistencias,cr[equipo*5-6+xx].rebotes);
}
