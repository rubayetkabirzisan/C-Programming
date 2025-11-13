#include<stdio.h>
struct book
{
  char name[20];
  int price;


};
int main ()
{
    typedef struct book Book;
    Book b={"Mission 27",170327} ;

    printf("%s\n",b.name);
    printf("%d\n",b.price);


    getch ();

}
