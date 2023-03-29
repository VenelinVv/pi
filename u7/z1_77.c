#include <stdio.h>
#include <stdlib.h>
#define N 7

int sumirane(int a[N]);

int main ()
{
     int i,a[N],x;
     
     for (i = 0; i < N; i++)
     {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
     }

     
    
     printf("sum = %d\n",sumirane(a));
     system("pause");
     return 0;
}

int sumirane(int a[N])
{    

     int j,sum=0;
     
    for (j = 0; j < N; j++)
     {
        sum+=a[j];
     }
    //printf("sumata = %d", sum);
    return sum;
}


