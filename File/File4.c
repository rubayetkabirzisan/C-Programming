#include<stdio.h>
int main ()
{
    FILE *file;
    char name[20];
    int age;

    file = fopen("test.txt","w");

    if (file==NULL)
    {
        printf("File doesn't exist");
    }

    else
    {
        printf("File is opened\n");

        printf("Enter your name : ");
        gets(name);

        printf("Enter your Age : ");
        scanf("%d",&age);

        fprintf(file,"Name = %s, Age = %d\n",name,age);

        printf("File is written successfully\n");
        fclose(file);

    }

    getch();
}
