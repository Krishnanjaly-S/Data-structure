#include<stdio.h>
int main()
{
    int rear=-1,front=-1,op,n;
    char choice;
    printf("Enter size of circular queue: ");
    scanf("%d",&n);
    int queue[n];
    do
    {
    printf("\nOPERATIONS");
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        if(front==(rear+1)%n){
        printf("Queue Overflow");
        }
        else
        {
            int item;
            printf("Enter the element to be inserted:");
            scanf("%d",&item);
            rear=(rear+1)%n;
            queue[rear]=item;
            if(front==-1)
            {
            front=0;
            }
        }
        break;
    case 2:
        if(front==-1){
        printf("\nCircular Queue Underflow\n");
    }
    else
        printf("The deleted element is %d",queue[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%n;
        }
    break;
    case 3:
        if(front==-1){
        printf("Circular Queue is empty");
        }
        else{
        printf("The circular queue is:");
        int i=front;
        while(i!=rear){
            printf("%d ",queue[i]);
            i=(i+1)%n;
        }
        printf("%d",queue[rear]);
        }
    break;
    case 4:
    printf("Exiting...");
    break;
    default:
        printf("Invalid choice");
        break;
    }}
    while(op!=4);
    return 0;
}
