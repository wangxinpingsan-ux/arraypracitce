#include <stdio.h>

int change1(int b)
{ 
   int small = b;
   
   return small;
}
int change2(int a)
{ 
   int big = a;
   
   return big; 
}
int main(void)
{
   int number[6] = {45, -7, 12, 0, 45, -20};
   int counter = 5;
   for (int i = 0; i < 5; i++)
   {

      if (number[i] > number[i + 1])
      {
         int small = change1(number[i + 1]), big = change2(number[i]);
         number[i] = small; 
         number[i + 1] = big;
         
      }
      for (; i == 4; counter--)
      {
         i = -1;
      }
      if (counter == 0)
      {
         break;
      }
   }

   for (int i = 0; i < 6; i++)
   {

      printf("%d\n", number[i]);
   }

   return 0;
}