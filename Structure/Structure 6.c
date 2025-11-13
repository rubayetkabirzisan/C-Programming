#include<stdio.h>
struct Person
{
    char name[20];
    int age;
    float salary;


};

void display(struct Person p)
{
    printf("\nName = %s\n",p.name);
    printf("Age = %d\n",p.age);
    printf("Salary = %f\n",p.salary);
}


int main ()
{
    struct Person person1,person2;

    strcpy(person1.name,"Anisul Islam");
    person1.age = 27;
    person1.salary = 12200;
    display(person1);

    strcpy(person2.name,"Raisul Islam");
    person2.age = 25;
    person2.salary = 22200;
    display(person2);

    getch();

}
