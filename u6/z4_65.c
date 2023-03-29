#include <stdio.h>
#include <stdlib.h>
#define N 20

main ()
{
     int a[N], i, counter=0,sum=0;
     
     for (i = 0; i < N; i++)
     {
         printf("Enter a[%d]: ", i);
         scanf("%d", &a[i]);
     }
     
     for (i = 0; i < N; i++)
     {
         if(a[i]>0)
         {
            counter++;
            sum+=a[i];
         }          
           
     }
      printf("Sumata e %d i broqt e %d", sum, counter);        
     system("pause");
}
