#include <stdio.h>

void swapByValue(int, int);
void swapByRefrence(int*, int*);

int main()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    // swapByValue(a, b);
    swapByRefrence(&a, &b);

    printf("Values after Swapping inside main: %d and %d\n", a, b);
    
    return 0;
}

void swapByRefrence(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Values after Swapping inside CallByValue: %d %d\n", a, b);
}
