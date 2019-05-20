#include <stdio.h>
#include <stdlib.h>

//Estas son las distintas funciones que usamos a lo largo del programa
void allstar();
void infojugadoreseste();
void infojugadoresoeste();

// En primer lugar estan definidas dos estructuras, una la usamos para almacenar los equipos y la otra para los datos de cada jugador
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

//Desarollo principal del programa
int main(){

	int eleccion,i,w,equipo,conf,xx; // Variables enteras que se usan a lo largo del programa

	//Definicion de los de los punteros
	FILE *pf;
	FILE *pe;
	FILE *po;
	FILE *pj;
	
   //Aqui definimos el vector que almacena el nombre de los equipos
	equipos cole[50];
	
	//Inicio programa es un printf que muestra en la pantalla las distintas opciones para continuar
	printf("\t***NBA GOATs***\n\nBienvenidos al mejor programa de la NBA\n\n");
	printf("1. Jugadores por equipo\n");
	printf("2. Rellena tu bracket de los playoffs\n");
	printf("3. Elige tus premios all star\n");
	printf("4. Salir del programa\n\n");
	
	// Este bucle do while permite volver a pedir que el usuario introduce un numero que se adecue a las opciones presentadas
	do {
	printf("Elige una opcion para continuar:\n");
	scanf("%d", &eleccion);//Con este scanf se recoge la variable que expresa que eleccion hace el usuario
	}while (eleccion > 4 || eleccion <=0);
	
	//Este switch case es el que redirige al usuario a su opcion deseada dependendo del numero que haya introducido
	switch (eleccion){
		case 1:// el case 1 es la primera opcion del menu despues de elegirla se le vuelve a pedir al usuario que elija opcion
			system ("cls");
			printf("Vamos a buscar a tu jugador favorito!\n");
			
			//en este do while el usuario intoduce una de las dos opciones este u oeste, o si no se las vuelve a pedir
			do{
				printf("Te vamos a mostar las dos conferencias que hay en la NBA, cada una con 15 equipos\n");
				printf("Elige una de las dos:\n(1)Oeste\n(2)Este\n");
				scanf("%d", &conf);
			}while (conf < 1 || conf>2);
			
			system ("cls");
			printf("Bien! Ahora te vamos a mostar los equipos de la conferencia escogida\n");
	
			// En este switch case en fucion de la variable introducida ejecuta el caso del este o del oeste
			switch (conf){
				case 1:
					po = fopen("oeste.txt","r");//Aqui se dirige al programa al fichero oeste 
					while(fscanf(po,"%[^\n]\n",cole[i].nombre) != EOF)// con fscanf lee el fichero
    				i++;
    
					for (i=0;i<15;i++){
						printf("%i. %s\n",i+1,cole[i].nombre);//Y aqui con printf lo imprime en pantalla
					}
					
					infojugadoresoeste();// esta es la funcion jugadores oeste que realic¡za parte del programa aparte, lo que es pedir el equipo, el jugador y mostrar los datos 
					
				break;
		
				case 2:
					pe = fopen("este.txt","r");//Aqui se dirige al programa al fichero este 
					while(fscanf(pe,"%[^\n]\n",cole[i].nombre) != EOF)// con fscanf lee el fichero
    				i++;
   
					for (i=0;i<15;i++){
						printf("%i. %s\n",i+1,cole[i].nombre);//Y aqui con printf lo imprime en pantalla
					}
					
					infojugadoreseste(xx=0);// esta es la funcion jugadores oeste que realic¡za parte del programa aparte, lo que es pedir el equipo, el jugador y mostrar los datos 
					
					break;	
					
			}
		break;
			
		case 2:
			system ("cls");
			break;
		
		case 3:
			system ("cls");
			allstar(w=0);
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
	printf("\nNombre: %s\nPosicion: %s\nPuntos: %.2f\nAsistencias: %.2f\nRebotes: %.2f\n",cr[equipo*5-5+xx].nombre, cr[equipo*5-5+xx].posicion,cr[equipo*5-5+xx].puntos,cr[equipo*5-5+xx].asistencias,cr[equipo*5-5+xx].rebotes);
}
void allstar(int w){

	FILE*ptFichero;
char nombre0[100];
char nombre1[100];
char nombre2[100];
char nombre3[100];
char nombre4[100];
char nombre5[100];
char nombre6[100];

ptFichero=fopen("allstar.txt", "w");

puts("\nCrea tus premios all star\n");
gets(nombre0);
puts("\nMVP: \n");
gets(nombre1);
puts("\nJugador que mas ha mejorado: \n");
gets(nombre2);
puts("\nMejor defensa: \n");
gets(nombre3);
puts("\nMejor entrenador: \n");
gets(nombre4);
puts("\nMejor quinteto: \n");
gets(nombre5);
puts("\nMejor novato: \n");
gets(nombre6); 
fprintf(ptFichero, "MVP :%s\n",nombre1);
fprintf(ptFichero, "Jugador que mas ha mejorado :%s\n",nombre2);
fprintf(ptFichero, "Mejor defensa: %s\n",nombre3);
fprintf(ptFichero, "Mejor entrenador: %s\n",nombre4);
fprintf(ptFichero, "Mejor quinteto: %s\n",nombre5);
fprintf(ptFichero, "Mejor novato: %s\n",nombre6);

fclose(ptFichero);
system ("cls");

printf("Quieres ver tus elecciones??\n1. Si\n2. No\n");
scanf("%d", &w);

switch (w){
	case 1:
		printf("Visita el fichero -allstar-");
		break;
		
	case 2:
		printf("Hasta pronto.");
		break;
	}
}
