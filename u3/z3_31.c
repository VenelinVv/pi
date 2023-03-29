#include <stdio.h>
int main ()
{
    int ab,ac,bc,xa,ya,xb,yb,xc,yc,pTr;

    printf ("Enter xa \n");
    scanf("%d",&xa);
    
    printf ("Enter ya \n");
    scanf("%d",&ya);
    
    printf ("Enter xb \n");
    scanf("%d",&xb);

    printf ("Enter yb \n");
    scanf("%d",&yb);
        
    printf ("Enter xc\n");
    scanf("%d",&xc);
    
    printf ("Enter yc \n");
    scanf("%d",&yc); 
       
    ab= (xb-xa)+(yb-ya);
    ac= (xc-xa)+(yc-ya);
    bc= (xc-xb)+(yc-yb);
     
    if(ab<0)
    {
            ab *= -1;
    }
    
    if(ac<0)
    {
            ac *= -1;
    }
    
    if(bc<0)
    {
            bc *= -1;
    }    
    
    if (ab+bc<ac || ab+ac<bc || bc+ac<ab)
    {
       printf("There is no such a triangle!");
       return -1;       
    }
    pTr = ab+ac+bc;
    printf("P for triangle is %d \n", pTr);
    
    system("pause");
    return 0;
}
