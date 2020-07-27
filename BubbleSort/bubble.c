#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *bubbleSort(int Arr[], int length)
{
	int i, j, temp;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length - i - 1; j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}
	return Arr;
}

void printArray(int Arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", Arr[i]);
	}
	printf("\n");
}

int main()
{
	int i, randomArray[20], count = 20;
	for (i = 0; i < count; i++)
	{
		randomArray[i] = rand() % 100;
	}

	printArray(randomArray, count);

	bubbleSort(randomArray, count);

	printArray(randomArray, count);
}