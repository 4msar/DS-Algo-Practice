#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *first, int *last)
{
	int temp = *first;
	*first = *last;
	*last = temp;
}

void selectionSort(int Arr[], int length)
{
	int i, j, min;
	for ( i = 0; i < length-1; i++){
		min = i;
		for ( j = i+1; j < length; j++){
			if( Arr[j] < Arr[min] ){
				min = j;
			}
		}
		swap(&Arr[min], &Arr[i]);	
	}
	
}

void printArray(int Arr[], int length){
	for (int i = 0; i < length; i++)
	{
		printf("%d ", Arr[i]);
	}
	printf("\n");
}

int main() {
	int i, randomArray[20], count = 20;
	for (i = 0; i <= count; i++){
		randomArray[i] = rand() % 100;
	}

	printArray(randomArray, count);

	selectionSort(randomArray, count);

	printArray(randomArray, count);
}