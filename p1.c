/*
 * p1.c
 *
 *  Created on: Feb 13, 2024
 *      Author: aimon
 */

#include <stdio.h>

void insertionSort(int arr[], int size)
{
	int j, key;
	for(int i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;
		while(arr[j] > key && j >= 0)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if(i != size - 1)
			printf(", ");
	}
	printf("\n");
}

int main()
{
	int K = 3;
	int N = 4;
	int inputArr[3][4] = { {1,3,5,7}, {2,4,6,8}, {0,9,10,11} };

	int mergedArr[K * N];
	for(int i = 0; i < K; i++)
	{
		for(int j = 0; j < N; j++)
		{
			mergedArr[N * i + j] = inputArr[i][j];
		}
	}

	insertionSort(mergedArr, K * N);

	printf("Final Merged Array: ");
	printArr(mergedArr, K * N);

	return 0;
}
