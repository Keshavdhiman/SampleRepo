#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &n);
    
    int i = n;
    
    while (n > 0) {
        sum += n;
        --n;
    }

    printf("Sum of first %d Natural Numbers is %d\n", i, sum);

    return 0;
}