#include <stdio.h>
#include <math.h>

int main()
{
    int num, reverse = 0, temp, digit, count = -1;

    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        ++count;
        temp /= 10;
    }

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        reverse += pow(10, count) * digit;
        temp /= 10;
        --count;
    }
    
    printf("%d", reverse);

    return 0;
}