#include <stdio.h>

int main()
{
   int i, j, r = 5;
   printf("\n\n");
   for (i = 0; i < r; i++)
   {

      for (j = 0; j < r; j++)
      {
         if (j + i == r / 2 || i + j == r - 1 + (r / 2) || j == i + (r / 2) || i == j + (r / 2))  //hollow kite
         {
            printf(" *");
         }
         else{
            printf("  ");
      }
   }
   printf("\n");
}
return 0;
}
