#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, temp, digit, count = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        ++count;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == num) {
        printf("Armstrong Number\n");
    }
    else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}