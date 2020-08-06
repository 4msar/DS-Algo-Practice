#include <stdio.h>

int binarySearch(int numbers[], int find, int length)
{
    int right, left, mid;
    left = 0;
    right = length - 1;
    // comapre the left &  right
    while (left <= right) {
        // set the middle point
        mid = (left + right) / 2;
        // now check the ite is in the middle point
        if (numbers[mid] == find) {
            return mid; // if find then simply return the index
        }
        // now check the side after/before middle point
        if (numbers[mid] < find) {
            // move the item in left side
            left = mid + 1;
        } else {
            // move the item in right side
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int numbers[] = { 6, 12, 32, 36, 45, 48, 52, 56, 59, 65 };
    int find;
    scanf("%d", &find);
    int result = binarySearch(numbers, find, 10);
    if (result >= 0) {
        printf("Index in Array: %d \nIndex : %d\n", numbers[result], result);
    } else {
        printf("Number is not in the Array!\n");
    }
    return 0;
}