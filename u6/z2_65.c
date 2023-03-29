#include <stdio.h>
#include <stdlib.h>
#define N 10

main ()
{
     float a[N];
     int i;
     int count = 0;
     float num;
     
     printf("Enter random num: ");
     scanf("%f", &num);
     
     for (i = 0; i < N; i++)
     {
         printf("Enter a[%d]: ", i);
         scanf("%f", &a[i]);
         
         if (a[i] > num)
         {
              count++;    
         }
     }
     
     for (i = 0; i < N; i++)
     {
         printf("a[%d]: %.3f\n", i, a[i]);
     }
     
     printf("Numbers bigger than %.3f: %d\n", num, count);
     
     system("pause");
}
