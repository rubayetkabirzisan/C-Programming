#include<stdio.h>
int main ()
{
    FILE *file;
    char name[40];
    int age,phoneNumber,num,i;
    file = fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }

    else
    {
        printf("File is opened\n");

        printf("Enter number of students : ");
        scanf("%d",&num);

        for(i=1; i<=num; i++)
        {
            printf("Enter student name : ");
            scanf("%s",&name);

            printf("Enter student age : ");
            scanf("%d",&age);

            printf("Enter student phone number : ");
            scanf("%d",&phoneNumber);

            fprintf(file,"%s\t\t%d\t\t%d\n",name,age,phoneNumber);
        }
        fclose(file);
    }

    getch ();
}
