#include <stdio.h>
#define MAX_ITEM 5

typedef struct {
    int top;
    int data[MAX_ITEM];
} Stack;

void push(Stack* list, int item)
{
    if (list->top < MAX_ITEM) {
        list->data[list->top] = item;
        list->top = list->top + 1;
    } else {
        printf("Stack is full!\n");
    }
};

int pop(Stack* list)
{
    int item;
    if (list->top == 0) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        list->top = list->top - 1;
        item = list->data[list->top];
        // list->data[list->top] = 0;
    }
    return item;
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
    Stack myStack;
    myStack.top = 0;
    int item, ops = 10;
    do {
        switch (ops) {
        case 1:
            printf("Enter item to insert: ");
            scanf("%d", &item);
            push(&myStack, item);
            if (myStack.top < MAX_ITEM) {
                printf("%d inserted to the stack!\n", item);
            }
            break;
        case 2:
            item = pop(&myStack);
            if (item != -1) {
                printf("%d remove from stack!\n", item);
            }
            break;

        case 4:
            printf("Items in the stack:\n");
            printArray(myStack.data, myStack.top);
            break;
        default:
            printf("1. Enter 1 for push\n2. Enter 2 for pop\n4. Enter 4 to show stack!\n3. Enter 0 to exit!\n");
            break;
        }
        printf("Action: ");
        scanf("%d", &ops);
    } while (ops != 0);

    return 0;
}