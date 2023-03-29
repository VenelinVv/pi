#include <stdio.h>
#include <stdlib.h>

main()
{
      float value, amot;
      int year;
      
      printf("Enter value: ");
      scanf("%f", &value);
      
      do
      {           
       printf("Enter Amot (in percent): "); 
       scanf("%f", &amot);
      } while (amot <= 0.0f || amot > 100);
      
      while (value > 0.0f)
      {     
            printf("Value: %.3f $ \n", value);
            value -= amot;
      }
      printf("Value nulled\n");
      
      system("pause");
}
