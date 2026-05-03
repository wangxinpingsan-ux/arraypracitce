#include <stdio.h>
#define size 10

int main(void)
{
    int total = 0;
    int grade[size] = {1, 20, 32, 65, 94, 51, 21, 54, 78, 23};

    for (int a = 0; a < size; a++)
    {

        total = total + grade[a];
    }
    float average = total / 10.0;
    printf("total = %d", total);
    printf("average = %f", average);

    return 0;
}