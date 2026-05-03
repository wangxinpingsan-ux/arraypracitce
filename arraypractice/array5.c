#include <stdio.h>

int main(void)
{

    int b = 0, total = 0;
    int number[10] = {0};

    printf("enter number (-1 to end ):");

    while (b < 10)
    {
        int a = 0;
        scanf("%d", &a);
        if (a == -1)
        {
            break;
        }

        number[b] = a;

        b++;
    }
    int max = number[0], min = number[0];
    for (int i = 0; i < b - 1; i++)
    {
        total = total + number[i];
    }

    for (int i = 1; i < b; i++)
    {

        if (number[i] > max)
        {
            max = number[i];
        }
        else if (number[i] < number[i + 1])
        {
        }
    }

    for (int i = 1; i < b; i++)
    {

        if (number[i] < min)
        {
            min = number[i];
        }
        else if (number[i] > number[i + 1])
        {
        }
    }

    printf("total= %d    \naverage=%.2f\n", total, total * 1.0 / b);
    printf("max is %d\n", max);
    printf("min is %d", min);

    return 0;
}