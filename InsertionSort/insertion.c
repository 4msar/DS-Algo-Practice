#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* insertionSort(int Arr[], int length)
{
    int i, j, item;
    for (i = 1; i < length; i++) {
        // assign Arr[i] to item
        item = Arr[i];
        // find the right index for item
        j = i - 1;
        while (j >= 0 && Arr[j] > item) {
            // move the Arr[j] to the next index (j+1)
            Arr[j + 1] = Arr[j];
            j = j - 1;
        }
        // Arr[j+1] is the right index for item, now set it,
        // and we are already blnak this from the upper loop
        Arr[j + 1] = item;
    }

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
    int i, count = 10, randomArray[10];
    for (i = 0; i < count; i++) {
        randomArray[i] = rand() % 100;
    }
    // int randomArray[10] = { 2, 3, 21, 45, 12, 13, 15, 16, 20, 40 };

    printArray(randomArray, count);

    insertionSort(randomArray, count);

    printArray(randomArray, count);
}