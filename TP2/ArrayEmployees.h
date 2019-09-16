
typedef struct{
     int id;
     char name[51];
     char lastName[51];
     float salary;
     int sector;
     int isEmpty; /// Activo (1) o Inactivo (0)
}Employee;

void setStatus(Employee eEmpleado[], int len, int status);
int findEmptyPlace(Employee eEmpleado[],int len);


int addEmployee(Employee eEmpleado, int len, int id, char name[],char lastName[],float salary,int sector);
int findEmployeeById(Employee eEmpleado, int len,int id);
