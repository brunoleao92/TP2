#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "ArrayEmployees.h"



void setStatus(Employee eEmpleado[], int len, int status)
{
    int i;
    for(i=0;i < len; i++)
    {
        eEmpleado[i].isEmpty = status;
    }

}

int addEmployee(Employee eEmpleado, int len, int id, char name[],char lastName[],float salary,int sector)
{



    return -1;

}

int findEmptyPlace(Employee eEmpleado[],int len)
{
    int i;
    for(i=0;i < len; i++)
    {
        if(eEmpleado[i].isEmpty == 0)
        {
            return i;
        }
    }
    return -1;
}

int findEmployeeById(Employee eEmpleado, int len,int id)
{
    int i;
    for(i=0;i < len; i++)
    {
        if(eEmpleado[i].id == id && eEmpleado[i].isEmpty == 1)
        {
            return i;
        }
    }
    return -1;

}





