#include<stdio.h>
//Local Structure
int main ()
{
    struct Person
{
    int age;
    float salary;


};
    struct Person person1,person2;//Local Variable
    person1.age = 27;
    person1.salary = 12750.50;

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    person2.age = 30;
    person2.salary = 21750.50;

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    getch ();
}

