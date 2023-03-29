#include <stdio.h>
#include <stdlib.h>

main ()
{
     int i,j,a[5][7],sum=0;
     
     for (i = 0; i < 5; i++)
     {
          for (j = 0; j < 7; j++)
        {
         printf("Enter a[%d][%d]: ", i,j);
         scanf("%d", &a[i][j]);
        }
     }
     
     for (j = 0; j < 7; j++)
     {
          for (i = 0; i < 5; i++)
        {
          sum+=a[i][j];
          printf("%d ",a[i][j]);
        }
        printf("\n");
     }
     printf("Sumata e %d",sum);
     
     system("pause");
}
