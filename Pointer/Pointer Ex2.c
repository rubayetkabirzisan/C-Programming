#include<stdio.h>
 int printAdd(int x)
 {
      printf("The address of variable x is %u\n",&x);
 }
int main ()
{
   int i=4;
   printf("The value of variable i is %d\n",i);
   printAdd(i);
   printf("The address of variable i is %u\n",&i);

return 0;

}
