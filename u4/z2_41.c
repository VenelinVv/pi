#include <stdio.h>
int main ()
{
    double sTriangle=10000, sCircle, rCircle, difference;
    printf ("Enter r for the circle");
    scanf("%d",&rCircle);
    sCircle = rCircle*rCircle*3.14;
    difference = sTriangle-sCircle;
    printf("The difference is %d",difference);
    system("pause");
    return 0;
}
