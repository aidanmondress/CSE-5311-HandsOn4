/*
 * p2.c
 *
 *  Created on: Feb 13, 2024
 *      Author: aimon
 */

#include <stdio.h>
#include <stdlib.h>

int removeDupes(int arr[], int n)
{
    if (n == 1 || n == 0)
        return n;

    int temp[n];
    int count = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] != arr[i + 1])
        	temp[count++] = arr[i];
    }

    temp[count++] = arr[n - 1];

    for(int i = 0; i < count; i++)
    {
        arr[i] = temp[i];
    }

    return count;
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
    int n = 9;
    int arr[9] = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    n = removeDupes(arr, n);

    printf("Final Array: ");
    printArr(arr, n);

    return 0;
}
