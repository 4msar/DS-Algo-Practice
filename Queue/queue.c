#include <stdio.h>
#define MAX_ITEM 5

typedef struct {
    int head;
    int data[MAX_ITEM + 1];
    int tail;
} Queue;

void enqueue(Queue* list, int item)
{
    if ((list->tail + 1) % (MAX_ITEM + 1) == list->head) {
        printf("Queue is full!\n");
    } else {
        list->data[list->tail] = item;
        list->tail = (list->tail + 1) % (MAX_ITEM + 1);
    }
};

int dequeue(Queue* list)
{
    int item;
    if (list->head == list->tail) {
        printf("Queue is empty!\n");
        return -1;
    }
    item = list->data[list->head];
    list->head = (list->head + 1) % (MAX_ITEM + 1);
    return item;
}

void printArray(int Arr[], int length, int start)
{
    if (!start) {
        start = 0;
    }
    for (int i = start; i < length; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

int main()
{
    Queue myQueue;
    myQueue.head = 0;
    myQueue.tail = 0;

    int item, ops = 10;
    do {
        switch (ops) {
        case 1:
            printf("Enter item to insert: ");
            scanf("%d", &item);
            enqueue(&myQueue, item);
            if (myQueue.head != myQueue.tail) {
                printf("%d inserted to the queue!\n", item);
            }
            break;
        case 2:
            item = dequeue(&myQueue);
            if (item != -1) {
                printf("%d remove from queue!\n", item);
            }
            break;

        case 4:
            printf("Items in the queue:\n");
            int start, end;
            if (myQueue.head >= myQueue.tail) {
                start = myQueue.tail;
                end = myQueue.head;
            } else {
                start = myQueue.head;
                end = myQueue.tail;
            }
            printArray(myQueue.data, end, start);
            break;
        default:
            printf("1. Enter 1 for insert\n2. Enter 2 for remove\n4. Enter 4 to show queue!\n3. Enter 0 to exit!\n");
            break;
        }
        printf("Action: ");
        scanf("%d", &ops);
    } while (ops != 0);

    return 0;
}