#include <stdio.h>
#include <stdlib.h>
#define N 15

main ()
{
     float a[N];
     int i;
     
     for (i = 0; i < N; i++)
     {
         printf("Enter a[%d]: ", i);
         scanf("%f", &a[i]);
     }
     
     for (i = 2; i < N; i+=3)
     {
         printf("a[%d]: %.3f\n", i, a[i]);           
     }
     
     system("pause");
}
