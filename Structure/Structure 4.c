#include<stdio.h>
struct Person
{
    int age;
    float salary;

};

int main ()
{

    struct Person person1 = {27,25550.50};//Local variable

    struct Person person2,person3;

    //element wise assignment
    person2.age = 25;
    person2.salary = 27750.50;

    //structure variable assignment
    person3 = person2;

    if(person2.age==person3.age && person2.salary==person3.salary)
        printf("Person2 equal Person3");

    else
        printf("Person2 not equal Person3");

    getch ();
}
