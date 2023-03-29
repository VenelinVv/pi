#include <stdio.h>
#include <stdlib.h>

main ()
{
     int a[6], i;
     int min, minIndex;
     
     for (i = 0; i < 6; i++)
     {
         printf("Enter a[%d]: ", i);
         scanf("%d", &a[i]);
     }
     
     min = a[0];
     for (i = 0; i < 6; i++)
     {
         
         if (a[i]<min)
         {
            min = a[i];
            minIndex = i;
         }             
     }
     
     printf("Minimum element is: %d with index %d\n", min, minIndex);
     
     system("pause");
}
