#include <stdio.h>
int enqueue(int rear, int n, int queue[]) 
{
    int item;
    if (rear >= n - 1) 
    {
        printf("Queue overflow\n");
    } 
    else 
    {
        printf("Enter the element to be inserted: ");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
    }
    return rear;  
}

int dequeue(int front, int rear, int queue[]) 
{
    if (front > rear) 
    {
        printf("Queue underflow\n");
    } 
    else 
    {
        printf("The deleted item is %d\n", queue[front]);
        front++;
    }
    return front;  
}

void display(int queue[], int front, int rear) 
{
    if (front > rear) {
        printf("Queue is empty\n");
    } 
    else 
    {
        printf("The queue is:\n");
        for (int i = front; i <= rear; i++) 
        {
            printf("%d  ", queue[i]);
        }
        printf("\n");
    }
}

int main() 
{
    int n, front = 0, rear = -1, option;
    char ch;
    printf("Enter the size of the queue: ");
    scanf("%d", &n);
    int queue[n];
    do {
        printf("\nOPERATIONS\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                rear = enqueue(rear, n, queue);
                break;
            case 2:
                front = dequeue(front, rear, queue);  
                break;
            case 3:
                display(queue, front, rear);
                break;
            default:
                printf("Invalid option\n");
                break;
        }
        printf("Do you want to continue (y/n): ");
        scanf(" %c", &ch);
    } 
    while (ch == 'Y' || ch == 'y');
    printf("\nExiting...\n");
    return 0;
}
