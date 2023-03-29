#include <stdio.h>
#include <stdlib.h>

main()
{
     int day, month, year; 
     printf("Enter date (day, month, year):\n"); 
     
     
      printf("Enter day: ");
      scanf("%d", &day);
     
     
     do
     {
      printf("Enter month: ");
      scanf("%d", &month);
     } while (month <= 0 || month > 12);
     
     printf("Enter year: ");
     scanf("%d", &year);
     
     
     switch (month)
     {
         case 1: if(day > 31)
         {
              printf("Incorrect date\n");
              break;
         }
         case 2: if (day > 28)
         {
              if(year % 4 != 0)
              {
                     printf("Incorrect date\n");
                     break;
              }
              else if (year % 4 == 0 && day > 29)
              {
                     printf("Incorrect date\n");
                     break;   
              }   
         }
         case 3: if(day > 31)
         {
              printf("Incorrect date\n");
              break;
         }
         case 4: if(day > 30)
         {
              printf("Incorrect date\n");
              break;
         }
         case 5: if(day > 31)
         {
              printf("Incorrect date\n");
              break;
         }
         case 6: if(day > 30)
         {
              printf("Incorrect date\n");
              break;
         }
         case 7: if(day > 31)
         {
              printf("Incorrect date\n");
              break;
         }
         case 8: if(day > 31)
         {
              printf("Incorrect date\n");
              break;
         }
         case 9: if(day > 30)
         {
              printf("Incorrect date\n");
              break;
         }
         case 10: if(day > 31)
         {
              printf("Incorrect date\n");
              break;
         }
         case 11: if(day > 30)
         {
              printf("Incorrect date\n");
              break;
         }
         case 12: if(day > 31)
         {
              printf("Incorrect date\n");
              break;
         }
         default:
                 printf("Date: %d/%d/%d\n", day, month, year);   
      }
     system("pause");
}
