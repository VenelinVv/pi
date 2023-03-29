#include <stdio.h>
#include <stdlib.h>
int main()
{
    float velocity_kmph,velocity_mph;
    float const milesInToKilometres = 1.60934;
    
    printf("Vavedete milite v chas\n");
    scanf("%f",&velocity_mph);
    
    velocity_kmph=velocity_mph*milesInToKilometres;
    printf("Kilomtrite v chas sa %.2f\n",velocity_kmph); 
    
    system("pause");
    return 0;
}
