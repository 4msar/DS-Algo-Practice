#include <stdio.h>

int linearSearch(int numbers[], int find)
{
    int i, n;
    for (i = 0; i <= 10; i++) {
        if (numbers[i] == find) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int numbers[] = { 6, 12, 32, 36, 45, 48, 52, 56, 59, 65 };
    int find;
    scanf("%d", &find);
    int result = linearSearch(numbers, find);
    if (result >= 0) {
        printf("Index in Array: %d \nIndex : %d\n", numbers[result], result);
    } else {
        printf("Number is not in the Array!");
    }
    return 0;
}