#include<stdio.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20] ;
}emp1;

void show(emp1 emp)
{
    printf("The code of employee is %d\n",emp.code);
     printf("The salary of employee is %f\n",emp.salary);
      printf("The name of employee is %s\n",emp.name);


}
int main ()
{
    emp1 e1;
    emp1 *ptr;
    ptr=&e1;
    ptr->code=101;
     ptr->salary=11.01;
      strcpy(ptr->name,"Harry");

      show(e1);

    return 0;
}

