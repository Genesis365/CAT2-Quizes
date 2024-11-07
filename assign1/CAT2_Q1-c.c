
/*A C program to define a structure named employee    
Author:Genesis Otieno
Date:7/11/2024
Description:it contains employee details */
#include <stdio.h>
#include <string.h>
struct employee {
char name [25];
int id;
char department[20];
float salary ;
char email[30];
};
int main ( ) {
    struct employee emp = {
     .name = "John Doe",
        .id = 12345,
        .department="Human Resources",
        .salary =50000.00,
        .email = "johndoe@company.com"
    };
    printf ("Name: %s\n",emp.name);
 printf("ID:%d\n",emp.id);
    printf ("Department:%s\n",emp.department);
   printf ( "Salary:%.2f\n",emp .salary);
   printf( "Email :%s\n",emp.email);
   return 0;
}

















