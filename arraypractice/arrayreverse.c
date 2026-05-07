#include <stdio.h>
#define size 6

int main(void)
{
    int temp =0;
   int number[size] = {2, 4, 6 ,8 ,10, 12};


 

    for (int j = 0;j<(size/2);j++){
    temp=number[j];
    number[j]=number[5-j];
    number[5-j]=temp;
    
    }



   for (int i = 0; i < 6; i++)
   {

      printf("%d\n", number[i]);
   }

   return 0;
}