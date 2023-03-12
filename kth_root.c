#include <stdio.h>
#include <math.h>

int main(void) {
	int testCase, k;
    long long int n, current;
	scanf("%d", &testCase);
	int count;

	for (int i = 0; i < testCase; ++i) {
		scanf("%lld %d", &n, &k);
        count = 0;

		do {
			current = pow(count, k);
			++count;
		} while (current <= n);

		printf("%d\n", count - 1);
	}

	return 0;
}