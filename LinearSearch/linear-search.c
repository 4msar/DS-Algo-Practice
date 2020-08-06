#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int numbers[], int find)
{
    int i, n;
    for (i = 0; i <= 10; i++) {
        // check the item is matched or not
        if (numbers[i] == find) {
            return i; // return the index
        }
    }
    return -1; // return not found!
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
    int count = 10, numbers[10], i, find;
    // int numbers[] = { 6, 12, 32, 36, 45, 48, 52, 56, 59, 65 };
    for (i = 0; i < count; i++) {
        numbers[i] = rand() % 100;
    }

    printArray(numbers, count);
    printf("Enter search item: ");
    scanf("%d", &find);
    int result = linearSearch(numbers, find);

    if (result >= 0) {
        printf("Item: %d \nIndex : %d\n", numbers[result], result);
    } else {
        printf("Number is not in the Array!\n");
    }
    return 0;
}