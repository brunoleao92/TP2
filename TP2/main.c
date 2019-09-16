#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "ArrayEmployees.h"


#define ELEMENTS 1000 ///CANTIDAD MAXIMA DE EMPLEADOS.

int main()
{
    ///Array empleados
    Employee eEmpleado[ELEMENTS];
    ///-------------------------------

    int idAux;
    char nameAux[51];
    char lastNameAux[51];
    float salaryAux;
    int sectorAux;

    char idAuxStr[50];
    char salaryAuxStr[50];
    char sectorAuxStr [50];


    char seguir ='s';
    int opcion=0;
    int freePlaceIndex;
    int foundIndex;


    setStatus(eEmpleado,ELEMENTS,0);

    while(seguir =='s')
    {
        printf("1- ALTA\n");
        printf("2- MODIFICAR\n");
        printf("3- BAJA\n");
        printf("4- INFORMAR\n\n");
        printf("5- SALIR\n");

        opcion = getValidInt("Ingrese una opcion", "Error. ingrese un numero entre 1 y 5", 1,5);


        switch(opcion)
        {
            case 1:
                    freePlaceIndex = findEmptyPlace(eEmpleado,ELEMENTS);
                    if(freePlaceIndex == -1)
                        {
                            printf("NO QUEDAN LUGARES LIBRES");
                            break;
                        }
                    printf("\n*******ALTA*******\n");

                    if(!getStringNumeros("Ingrese el ID",idAuxStr))
                    {
                         printf ("El ID debe ser numerico\n");
                         break;
                    }

                    idAux=atoi(idAuxStr);

                    if(findEmployeeById(eEmpleado,ELEMENTS,idAux)!= -1)
                    {
                        printf("El ID ya existe!!!!!");
                        break;
                    }

                    if(!getStringLetras("Ingrese el nombre:",nameAux))
                    {
                        printf("Error. El nombre debe estar compuesto solo por letras\n");
                        break;
                    }

                     if(!getStringLetras("Ingrese el apellido:",lastNameAux))
                    {
                        printf("Error. El apellido debe estar compuesto solo por letras\n");
                        break;
                    }

                    if(!getStringNumerosFlotantes("Ingrese el salario del empleado", salaryAuxStr))
                    {
                        printf("Error. El salario debe ser numerico.");
                        break;
                    }
                    salaryAux = atof(salaryAuxStr);

                    if(!getStringNumeros("Ingrese codigo del sector al que pertenece:",sectorAuxStr))
                    {
                        printf("Error. El codigo del sector debe ser numerico.");
                        break;
                    }
                    sectorAux = atoi(sectorAuxStr);

                    eEmpleado[freePlaceIndex].id=idAux
                    strcpy(eEmpleado[freePlaceIndex].name, nameAux);
                    strcpy(eEmpleado[freePlaceIndex].lastName, lastNameAux);
                    eEmpleado[freePlaceIndex].salary = salaryAux;
                    eEmpleado[freePlaceIndex].sector = sectorAux;

                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:

                printf("**********************************************************\n");
                printf("*********************ADIOS!!!!!***************************\n");
                printf("**********************************************************\n");
                system("pause");

                seguir='n';


                break;
        }
    }








    return 0;
}
