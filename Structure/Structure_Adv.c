#include<stdio.h>
typedef struct complex
{
    int real;
    int imaginary;

} cmp;

void display(cmp c)
{
    printf("The value of real part is %d\n",c.real);
    printf("The value of imaginary part is %d\n",c.imaginary);
}

int main ()
{
    cmp cnums[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter the real value of %d num\n",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the imaginary value of %d num\n",i+1);
        scanf("%d",&cnums[i].imaginary);

    }

    for(int i=0; i<5; i++)
    {
        display(cnums[i]);
    }

    return 0;
}
