#include<stdio.h> 
int main() 
{ 
    int n,item,choice; 
    char ch; 
    int top=-1; 
    printf("Enter the size of the stack:"); 
    scanf("%d",&n); 
    int A[n]; 
    do 
    { 
        printf("\nOPERATIONS:\n"); 
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n"); 
        printf("Enter a choice:"); 
        scanf("%d",&choice); 
        switch(choice) 
        { 
            case 1: 
            if(top>=n-1) 
            { 
                printf("Overflow"); 
            } 
            else 
            { 
                printf("Enter the item to be inserted:"); 
                scanf("%d",&item); 
                top++; 
                A[top]=item; 
            } 
            break; 
            case 2: 
            if(top==-1) 
            { 
                printf("\nUnderflow"); 
            } 
            else 
            { 
                item=A[top]; 
                top--; 
                printf("The deleted element is %d",item); 
            } 
            break; 
            case 3: 
            if(top==-1) 
            { 
                printf("\nStack is empty"); 
            }
            else 
            { 
                printf("Stack is:\n"); 
                for(int i=0;i<=top;i++) 
                { 
                    printf("%d\n",A[i]); 
                } 
            } 
            break; 
            case 4: 
            { 
                printf("Exiting.."); 
                break; 
            } 
            default: 
                printf("Invalid choice"); 
        } 
    } 
    while(choice!=4); 
    return 0; 
}
