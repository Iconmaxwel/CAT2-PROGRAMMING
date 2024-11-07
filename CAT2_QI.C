//Details of John Doe
#include <stdio.h>
#include <string.h>

struct employee {
      char name [25];
      int id;
      char department [20];
      float salary;
      char email [50];

} employee ;
int main (){
//struct employee employee1;
strcpy(employee.name,"John Doe");
employee.id = 12345;
strcpy(employee.department,"Human Resource");
employee.salary  = 5500.50;
strcpy(employee.email,"john.doe@company.com");

//print the variables;
printf("Name :%s\n",employee.name);
printf("Id :%d\n",employee.id);
printf("Department :%s\n",employee.department);
printf("Salary :%.2f\n",employee.salary);
printf("Email :%s\n",employee.email);

return 0;
}
