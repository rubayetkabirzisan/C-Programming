#include<stdio.h>
int areaRect(int length,int width)
{
    int area;
    area =  length*width;
    return area;



}

int main ()
{
    int l=10,b=20;
    int area =areaRect(l,b);
    printf("%d\n",area);

    l=15,b=25;
    area =areaRect(l,b);
    printf("%d",area);

}
