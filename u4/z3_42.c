#include <stdio.h>
int main ()
{
    int x, y;
    printf("Enter x:\n");
    scanf("%d", &x);
    
    printf("Enter y:\n");
    scanf("%d", &y);
    
    if (x==0 && y==0)
    {
          printf("Point is center of coordinate system\n");   
    }
    else if (x==0 && y!=0)
    {
       printf("Tochkata leji na apcisata! \n");    
    }
    else if (x!=0 && y==0)
    {
       printf("Tochkata leji na ordinatata \n!");    
    }     
    else if (x>0 && y>0)
    {
         printf("Tochakata e v I kvadrant\n");
    }
    else if (x<0 && y>0)
    {
         printf("Tochakata e v II kvadrant\n");
    }
    else if (x<0 && y<0)
    {
         printf("Tochakata e v III kvadrant\n");
    }
    else if (x>0 && y<0)
    {
         printf("Tochakata e v IV kvadrant\n");
    }
    
    system("pause");
    return 0;
   
}
