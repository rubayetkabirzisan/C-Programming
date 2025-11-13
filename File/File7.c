#include<stdio.h>
int main ()
{
    FILE *file;
    char fname[40],lname[40];
    int age;
    file = fopen("test.txt","r");

    if (file==NULL)
    {
        printf("File doesn't exist");
    }

    else
    {
        printf("File is opened\n");
        fscanf(file,"%s\t%s\t%d",&fname,&lname,&age);
        printf("%s\t%s\t%d\n",fname,lname,age);

        fclose(file);

    }

    getch();
}
