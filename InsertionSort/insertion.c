#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* insertionSort(int Arr[], int length)
{
    // rest of the code
    return Arr;
}

void printArray(int Arr[], int length)
{
    for (int i = 0; i < length; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

int main()
{
    int i, randomArray[20], count = 20;
    for (i = 0; i < count; i++) {
        randomArray[i] = rand() % 100;
    }

    printArray(randomArray, count);

    insertionSort(randomArray, count);

    printArray(randomArray, count);
}