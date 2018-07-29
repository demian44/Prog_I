#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define CANT_PERSONAS 3

typedef struct{
    int anio;
    char mes[20];
    int dia;
}EFecha;


typedef struct{
    int legajo;
    int edad;
    char nombre[20];
    char apellido[20];
}EPersona;

int main()
{

    EPersona persona;


    printf("Direcion memoria legajo: %x\n",&persona.edad);
    printf("Direccion memoria estructura %x",&persona);


  /* EPersona persona;

    printf("Nombre?");
    gets(persona.nombre);

    printf("Apellido?");
    gets(persona.apellido);

    printf("Legajo?");
    scanf("%d",&persona.legajo);

    printf("Anio de nacimiento:");
    scanf("%d",&persona.nacimiento.anio);

    fflush(stdin);

    printf("Mes de nacimiento:");
    gets(persona.nacimiento.mes);

    printf("Día de nacimiento:");
    scanf("%d",&persona.nacimiento.dia);
    system("cls");
    printf("Nombre: %s\nApellido: %s\nLegajo: %d\nNacimiento: %d/%s/%d",
           persona.nombre,
           persona.apellido,
           persona.legajo,
           persona.nacimiento.dia,
           persona.nacimiento.mes,
           persona.nacimiento.anio
           );
*/





/*
    EPersona listPersonas[CANT_PERSONAS];
    int i = 0;
    for( ; i<CANT_PERSONAS;i++)
    {
        printf("Ingrese nombre: ");
        gets(listPersonas[i].nombre);

        printf("Ingrese apellido: ");
        gets(listPersonas[i].apellido);

        printf("Ingrese legajo: ");
        scanf("%d",&( listPersonas[i].legajo) );

        printf("Ingrese anio: ");
        scanf("%d",&( listPersonas[i].nacimiento.anio ) );

        fflush(stdin);
        printf("Ingrese mes: ");
        gets( listPersonas[i].nacimiento.mes);

        printf("Ingrese dia: ");
        scanf("%d",&( listPersonas[i].nacimiento.dia ) );

        fflush(stdin);
    }
    system("cls");

    for(i=0; i<CANT_PERSONAS;i++)
    {
        printf(" %s - %s - %d - %d/%s/%d\n",
               listPersonas[i].nombre,
               listPersonas[i].apellido,
               listPersonas[i].legajo,
               listPersonas[i].nacimiento.dia,
               listPersonas[i].nacimiento.mes,
               listPersonas[i].nacimiento.anio
               );
    }
*/
  return 0;
}
