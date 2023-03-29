#include <stdio.h>
int main ()
{
    int a,b;
    a=2;
    b=5;
    a += b;
    b= a - b;
    a -= b; 
    printf ("a = %d b = %d",a,b);
    system("pause");
    return 0;
}
