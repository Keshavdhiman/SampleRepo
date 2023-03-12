#include <stdio.h>

int main(void) {
	int size;
	scanf("%d", &size);

	int temp;
	int count[3] = {0};

	for (int i = 0; i < size; ++i) {
		scanf("%d", &temp);
		++count[temp];
	}

	int k = 0;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < count[i]; ++j) {
			printf("%d\n", i);
			++k;
		}
	}

	return 0;
}