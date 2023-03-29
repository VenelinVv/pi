#include <stdio.h>
#include <stdlib.h>

main()
{
      int num, counterForEven=0, counterForAll=0;
      float aver=0;
      while (counterForEven < 10)
      {
            printf("Vuvedete chislo: ");
            counterForAll++;
            scanf("%d",&num);
            if(num%2==0)
            {
               counterForEven++;
               aver+=num;
            }
            printf("\n");
      }
      printf("Vsichki chisla sa %d\n",counterForAll);
      printf("Srednoto aritmetichno na chetnite chisla e %.2f\n",aver/10);
      
      system("pause");
}
