#include <stdio.h>
main()
{
int opcion;
printf("\nNBA GOATS\n\n");
printf("Bienvenido al programa, elige donde quieres continuar:\n\n\n");
printf("1-Informacion acerca de los jugadores\n\n");
printf("2-Rellena tu bracket\n\n");
printf("3-Elige tus premios all star\n\n");
scanf ("%d",&opcion);


switch (opcion)
{
case 1:printf ("Adelante");
break;
case 2:printf ("Bienvenido");
break;
case 3:printf ("Saludos");
break;
default:
 printf ("Opcion incorrecta\n");
}

}

