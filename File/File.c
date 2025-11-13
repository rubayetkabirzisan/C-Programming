#include<stdio.h>
int main ()
{
    FILE *ptr;
    int num;
    printf("Enter the integer you want the table of\n");
    scanf("%d",&num);
    ptr=fopen("Table.txt","w");
    for(int i=0; i<10; i++)
    {
        fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d to Table.txt\n",num);

    return 0;
}
