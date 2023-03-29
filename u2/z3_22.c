#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x = 12;
    float y = 6;
    
    float z,f;
    z = (1/(pow(x, 2)+1) + pow(y, 2)/(pow(y, 2)-1) + 5/(pow(x, 2) + pow(y, 2)))/(1/(pow(x, 2) - pow(y, 2))) ;
    printf("Resultat ot celiqt izraz\n");
    printf("%f", z);
    printf("\n");
    f = 1/(pow(x, 2)+1);
    f+=  pow(y, 2)/(pow(y, 2)-1);
    f+= 5/(pow(x, 2) + pow(y, 2));
    f/= 1/(pow(x, 2) - pow(y, 2));
     printf("Resultat ot razdroben izraz\n");
    printf("%f\n",f);
    
    system("pause");
    return 0;
}
