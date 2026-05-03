#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(void)
{
  int number = rand() % 6 + 1;
  return number;
}
int main(void)
{
  srand(time(NULL));
  int dice_number[7] = {0}; // 骰子有1到6

  for (int i = 0; i < 10000000; i++)
  { // 執行3次

    int random = roll(); // 產生出1到6

    dice_number[random]++;
  }

  for (int i = 1; i < 7; i++)
  { // 執行6次

    printf("%d  %d  times   rate is %.3f\n", i, dice_number[i], dice_number[i] / 10000000.0);
  }

  return 0;
}