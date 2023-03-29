#include <stdio.h>
#include <math.h>
int main ()
{
    int xa,ya,xb,yb,r;

    //point coords
    printf ("Enter xa \n");
    scanf("%d",&xa);
    
    printf ("Enter ya \n");
    scanf("%d",&ya);
    
    //circle coords
    printf ("Enter xb \n");
    scanf("%d",&xb);

    printf ("Enter yb \n");
    scanf("%d",&yb);
        
    printf ("Enter r\n");
    scanf("%d",&r);

     
    if(pow(xa-xb,2)+pow(ya-yb,2)<r*r)
    {
        printf("Tochkata e v kruga \n");
    }
    else if (pow(xa-xb,2)+pow(ya-yb,2) == r*r)
    {
        printf("Tochkata leji vurhu kruga \n");
        system("pause");
    }
    else
    {
        printf("Tochkata ne e v kruga \n");
    }
    
    system("pause");
    return 0;
}
