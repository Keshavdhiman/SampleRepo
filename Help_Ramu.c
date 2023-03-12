#include <stdio.h>

int prices[4];

int min (int a, int b) {
	if (a > b) {
		return b;
	}

	return a;
}

int TotalCalculator (int noOfRides) {
	int sum = 0, temp;

	for (int i = 0; i < noOfRides; ++i) {
		scanf("%d", &temp);
		sum += min(temp * prices[0], prices[1]);
	}

	return min(sum, prices[2]);
}

int main(void) {
	int testCase, noOfRickshaw, noOfCabs, TotalRickShaw, TotalCabs;
	scanf("%d", &testCase);

	for (int i = 0; i < testCase; ++i) {
		for (int j = 0; j < 4; ++j) {
			scanf("%d", &prices[j]);
		}

		scanf("%d %d", &noOfRickshaw, &noOfCabs);

		TotalRickShaw = TotalCalculator(noOfRickshaw);
		TotalCabs = TotalCalculator(noOfCabs);

		printf("%d", min(TotalRickShaw + TotalCabs, prices[3]));
	}

	return 0;
}