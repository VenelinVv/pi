#include <stdio.h>
#include <stdlib.h>
#define N 15

main ()
{
     int a[N], i;
     
     for (i = 0; i < N; i++)
     {
         printf("Enter a[%d]: ", i);
         scanf("%d", &a[i]);
     }
     
     for (i = N; i > 0; i--)
     {
         printf("a[%d]: %d", i, a[i]);           
     }
     
     system("pause");
}
