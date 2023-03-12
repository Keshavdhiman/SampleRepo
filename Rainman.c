#include <stdio.h>
#include <limits.h>

void rainMan(int* arr, int size, int* waterTrapped) {
    if (size <= 2) {
        return;
    }

    int largestColumn = INT_MIN, SecondlargestColumn = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (SecondlargestColumn == INT_MIN || arr[SecondlargestColumn] <= arr[i]) {
            if (largestColumn == INT_MIN) {
                largestColumn = i;
            }
            else if (arr[i] <= arr[largestColumn]) {
                SecondlargestColumn = i;
            }
            else {
                SecondlargestColumn = largestColumn;
                largestColumn = i;
            }
        }
    }

    int hold = arr[SecondlargestColumn];
    int start = largestColumn, end = SecondlargestColumn;
    
    if (SecondlargestColumn < largestColumn) {
        start = SecondlargestColumn;
        end = largestColumn;
    }

    for (int i = start + 1; i < end; ++i) {
        *waterTrapped += (hold - arr[i]);
    }

    rainMan(arr, start + 1, waterTrapped);
	rainMan(&arr[end], size - end, waterTrapped);
}

int main()
{
    int size, testCase, waterTrapped;
    scanf("%d", &testCase);
    
    for (int i = 0; i < testCase; ++i) {
		waterTrapped = 0;
		scanf("%d", &size);
		int arr[size];

		for (int j = 0; j < size; ++j) {
			scanf("%d", &arr[j]); 
		}

		rainMan(arr, size, &waterTrapped);
		printf("%d\n", waterTrapped);
    }
    
    return 0;
}