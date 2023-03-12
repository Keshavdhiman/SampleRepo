#include <stdio.h>

int main()
{
    int n, candies, friends;

    printf("Enter Number of test Cases: ");
    scanf("%d", &n);

    int arr[n][2];

    for (int i = 0; i < n; ++i) {
        printf("Enter Number of candies and friends: ");
        scanf("%d %d", &candies, &friends);

        arr[i][0] = candies;
        arr[i][1] = friends;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d\n", arr[i][0] % arr[i][1]);
    }

    return 0;
}