#include <stdio.h>
#include <stdlib.h>

//Estas son las distintas funciones que usamos a lo largo del programa
void allstar();
void infojugadoreseste();
void infojugadoresoeste();
void playoffs();

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

	int eleccion,i,w,equipo,conf,xx,cc; // Variables enteras que se usan a lo largo del programa

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
			system ("cls"); // Borra todo lo anterior
			printf("Vamos a buscar a tu jugador favorito!\n");
			
			//En este do while el usuario intoduce una de las dos opciones este u oeste, o si no se las vuelve a pedir
			do{
				printf("Te vamos a mostar las dos conferencias que hay en la NBA, cada una con 15 equipos\n");
				printf("Elige una de las dos:\n(1)Oeste\n(2)Este\n");
				scanf("%d", &conf);
			}while (conf < 1 || conf>2);
			
			system ("cls"); // Borra todo lo anterior
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
					
					infojugadoresoeste();// Abre la funcion indicada
					
				break;
		
				case 2:
					pe = fopen("este.txt","r");//Aqui se dirige al programa al fichero este 
					while(fscanf(pe,"%[^\n]\n",cole[i].nombre) != EOF)// con fscanf lee el fichero
    				i++;
   
					for (i=0;i<15;i++){
						printf("%i. %s\n",i+1,cole[i].nombre);//Y aqui con printf lo imprime en pantalla
					}
					
					infojugadoreseste(xx=0);// Abre la funcion indicada
					
					break;	
					
			}
		break;
			
		case 2: 
			system ("cls"); // Borra todo lo anterior
			do{
			printf("Elige la conferencia para escoger tus brackets\n");
			printf("1.Oeste\n");
			printf("2.Este\n"); 
			scanf ("%d", &cc);
			} while (cc<1 || cc>2);
			// Escribe equipos de cada conferencia
			switch (cc){
				case 1: 
					po = fopen("oeste.txt","r");//Aqui se dirige al programa al fichero oeste 
					while(fscanf(po,"%[^\n]\n",cole[i].nombre) != EOF)// con fscanf lee el fichero
    				i++;
    				
    				system("cls");// Borra todo lo anterior
    
					for (i=0;i<15;i++){
						printf("%i. %s\n",i+1,cole[i].nombre);//Y aqui con printf lo imprime en pantalla
					}
					
					playoffs();// Abre la funcion indicada
					
				break;
		
				case 2:
					pe = fopen("este.txt","r");//Aqui se dirige al programa al fichero este 
					while(fscanf(pe,"%[^\n]\n",cole[i].nombre) != EOF)// con fscanf lee el fichero
    				i++;
   					
   					system("cls");// Borra todo lo anterior
   					
					for (i=0;i<15;i++){
						printf("%i. %s\n",i+1,cole[i].nombre);//Y aqui con printf lo imprime en pantalla
					}
					
					playoffs();// Abre la funcion indicada
					
					break;	
					
			}
			break;
		
		case 3: 
			system ("cls"); // Borra todo lo anterior
			allstar(w=0); // Abre la funcion indicada
			break;
		
		case 4: 
			system ("cls"); // Borra todo lo anterior
			printf("Adios,vuelve pronto!\n");
			break;
		
	}
	
	return 0;
}

// Funcion de los jugadores de la conferencia este
void infojugadoreseste(int xx){
	// Fichero
	FILE *pj;
	// Variables utilizadas
	int i,equipo,g;
	// Vector de los jugadores
	jugador cr[500];
	g=0;
	//Abre fichero
	pj = fopen("eeste.txt","r");
	// Lee el fichero
	while(fscanf(pj,"%[^;];%[^;];%f;%f;%f;%[^\n]\n",
    cr[i].nombre,
    cr[i].posicion,
    &cr[i].puntos,
    &cr[i].asistencias,
	&cr[i].rebotes,
	cr[i].equipo) != EOF)
    i++;
    // Pregunta el equipo que quieres ver
    do{
    printf("\nEscribe el equipo que quieres que se vea: ");
    scanf("%d", &equipo);
	} while (equipo<1 || equipo>15);
    system("cls");  // Borra todo lo anterior
    printf("Estos son los jugadores\n");
	// Muestra los jugadores del equipo que has escogido
    for (i=equipo*5-5;i<equipo*5;i++){
		printf("\n%d. %s\n",g+=1,cr[i].nombre);
	}
	// Escoge a un jugador
	do {
	printf("\nElige a tu jugador preferido:");
	scanf("%d", &xx);
	} while (xx>5 || xx<1);
	
	system("cls");  // Borra todo lo anterior
	// Estadisticas del jugador deseado
	printf("Estas son las estadisticas buscadas:\n");
	printf("\nNombre: %s\nPosicion: %s\nPuntos: %.2f\nAsistencias: %.2f\nRebotes: %.2f\n",cr[equipo*5-6+xx].nombre, cr[equipo*5-6+xx].posicion,cr[equipo*5-6+xx].puntos,cr[equipo*5-6+xx].asistencias,cr[equipo*5-6+xx].rebotes);
}

// Funcion de los jugadores de la conferencia oeste
void infojugadoresoeste(int xx){
	// Definimos el fichero
	FILE *pj;
	// Variables utilizadas
	int i,equipo,g;
	// Estructura jugador
	jugador cr[500];
	g=0;
	// Abrimos fichero
	pj = fopen("eoeste.txt","r");
	// Lee fichero
	while(fscanf(pj,"%[^;];%[^;];%f;%f;%f;%[^\n]\n",
    cr[i].nombre,
    cr[i].posicion,
    &cr[i].puntos,
    &cr[i].asistencias,
	&cr[i].rebotes,
	cr[i].equipo) != EOF)
    i++;
    // Pregunta el equipo que quieres ver
    do{
    printf("\nEscribe el equipo que quieres que se vea: ");
    scanf("%d", &equipo);
	} while (equipo<1 || equipo>15);
	    
    system("cls");  // Borra todo lo anterior
    printf("Estos son los jugadores\n");
	// Muestra los jugadores del equipo que has escogido
    for (i=equipo*5-5;i<equipo*5;i++){
		printf("\n%d. %s\n",g+=1,cr[i].nombre);
	}
	// Escoge a un jugador
	do {
	printf("\nElige a tu jugador preferido:");
	scanf("%d", &xx);
	} while (xx>5 || xx<1);
	
	system("cls");  // Borra todo lo anterior
	// Estadisticas del jugador deseado
	printf("Estas son las estadisticas buscadas:\n");
	printf("\nNombre: %s\nPosicion: %s\nPuntos: %.2f\nAsistencias: %.2f\nRebotes: %.2f\n",cr[equipo*5-6+xx].nombre, cr[equipo*5-6+xx].posicion,cr[equipo*5-6+xx].puntos,cr[equipo*5-6+xx].asistencias,cr[equipo*5-6+xx].rebotes);
}
void allstar(int w){
	// Define fichero
	FILE*ptFichero;
	// Variables a utilizar
	char nombre0[100];
	char nombre1[100];
	char nombre2[100];
	char nombre3[100];
	char nombre4[100];
	char nombre5[100];
	char nombre6[100];
	// Abre fichero
	ptFichero=fopen("allstar.txt", "w");

	puts("\nCrea tus premios all star\n"); // Escribe en el programa
	gets(nombre0); 
	puts("\nMVP: \n");// Escribe en el programa
	gets(nombre1); // Guarda en el programa
	puts("\nJugador que mas ha mejorado: \n");// Escribe en el programa
	gets(nombre2);// Guarda en el programa
	puts("\nMejor defensa: \n");// Escribe en el programa
	gets(nombre3);// Guarda en el programa
	puts("\nMejor entrenador: \n");// Escribe en el programa
	gets(nombre4);// Guarda en el programa
	puts("\nMejor quinteto: \n");// Escribe en el programa
	gets(nombre5);// Guarda en el programa
	puts("\nMejor novato: \n");// Escribe en el programa
	gets(nombre6); // Guarda en el programa
	
	fprintf(ptFichero, "MVP :%s\n",nombre1); // Escribe en el fichero
	fprintf(ptFichero, "Jugador que mas ha mejorado :%s\n",nombre2); // Escribe en el fichero
	fprintf(ptFichero, "Mejor defensa: %s\n",nombre3); // Escribe en el fichero
	fprintf(ptFichero, "Mejor entrenador: %s\n",nombre4); // Escribe en el fichero
	fprintf(ptFichero, "Mejor quinteto: %s\n",nombre5); // Escribe en el fichero
	fprintf(ptFichero, "Mejor novato: %s\n",nombre6); // Escribe en el fichero

	fclose(ptFichero); // Cierra fichero
	system ("cls");  // Borra todo lo anterior
	// Escoge si quieres ver que has esogido
	do {
		printf("Quieres ver tus elecciones??\n1. Si\n2. No\n");
		scanf("%d", &w);
	} while (w<1 || w>2);

	switch (w){
		case 1:
			printf("Visita el fichero -allstar- en la carpeta del programa");
		break;
		
		case 2:
			printf("Hasta pronto.");
		break;
	}
}
// Funcion para 
void playoffs(){
	
	FILE*ptFichero;
	// Variables a utilizar
	char clas0[50];
	char clas1[50];
	char clas2[50];
	char clas3[50];
	char clas4[50];
	char clas5[50];
	char clas6[50];
	char clas7[50];
	char clas8[50];
	char clas9[50];
	char clas10[50];
	char clas11[50];
	char clas12[50];
	char clas13[50];
	char clas14[50];
	char clas15[50];

	ptFichero=fopen("bracket.txt", "w");

	gets(clas0);
	printf("\nprimer clasificado primera ronda: \n");
	gets(clas1);// Guarda en el programa
	printf("\nSegundo clasificado primera ronda\n");
	gets(clas2);// Guarda en el programa
	printf("\nTercer clasificado primera ronda: \n");
	gets(clas3);// Guarda en el programa
	printf("\nCuarto clasificado primera ronda: \n");
	gets(clas4);// Guarda en el programa
	printf("\nQuinto clasificado primera ronda: \n");
	gets(clas5);// Guarda en el programa
	printf("\nSexto clasificado primera ronda: \n");
	gets(clas6); // Guarda en el programa
	printf("\nSeptimo clasificado primera ronda: \n");
	gets(clas7);// Guarda en el programa
	printf("\nOctavo clasificado primera ronda: \n");
	gets(clas8);// Guarda en el programa
	printf("\nGanador entre %s y %s: \n", clas1,clas8);
	gets(clas9);// Guarda en el programa
	printf("\nGanador entre %s y %s: \n", clas4,clas5);
	gets(clas10);// Guarda en el programa
	printf("\nGanador entre %s y %s: \n", clas3,clas6);
	gets(clas11);// Guarda en el programa
	printf("\nGanador entre %s y %s: \n", clas2,clas7);
	gets(clas12);// Guarda en el programa
	printf("\nGanador entre %s y %s: \n", clas9,clas10);
	gets(clas13);// Guarda en el programa
	printf("\nGanador entre %s y %s: \n", clas11,clas12);
	gets(clas14);// Guarda en el programa
	printf("\nGanador entre %s y %s: \n", clas13,clas14);
	gets(clas15);// Guarda en el programa
	printf("Tu campeon es %s!!!!!!", clas15);


	fprintf(ptFichero, "Primer clasificado primera ronda: :%s\n",clas1); // Escribe en el fichero
	fprintf(ptFichero, "Segundo clasificado primera ronda::%s\n",clas2); // Escribe en el fichero
	fprintf(ptFichero, "Tercer clasificado primera ronda:: %s\n",clas3); // Escribe en el fichero
	fprintf(ptFichero, "Cuarto clasificado primera ronda:: %s\n",clas4); // Escribe en el fichero
	fprintf(ptFichero, "Quinto clasificado primera ronda:: %s\n",clas5); // Escribe en el fichero
	fprintf(ptFichero, "Sexto clasificado primera ronda:: %s\n",clas6); // Escribe en el fichero
	fprintf(ptFichero, "Septimo clasificado primera ronda:: %s\n",clas7); // Escribe en el fichero
	fprintf(ptFichero, "Octavo clasificado primera ronda:: %s\n",clas8); // Escribe en el fichero
	fprintf(ptFichero, "Primer clasificado semifinales de conferencia:: %s\n",clas9); // Escribe en el fichero
	fprintf(ptFichero, "Segundo clasificado semifinales de conferencia:: %s\n",clas10); // Escribe en el fichero
	fprintf(ptFichero, "Tercero clasificado semifinales de conferencia:: %s\n",clas11); // Escribe en el fichero
	fprintf(ptFichero, "Cuarto clasificado semifinales de conferencia:: %s\n",clas12); // Escribe en el fichero
	fprintf(ptFichero, "Primer clasificado finales de conferencia:: %s\n",clas13); // Escribe en el fichero
	fprintf(ptFichero, "Octavo clasificado finales de conferencia:: %s\n",clas14); // Escribe en el fichero
	fprintf(ptFichero, "Campeon de conferencia:: %s\n",clas15); // Escribe en el fichero

	fclose(ptFichero);
}
