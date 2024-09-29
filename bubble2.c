#include <stdio.h>
int main()
{
    int i,j=0,n,pass,temp,c=0;c++;
    printf("Enter the no of elements:");
    scanf("%d",&n);c++;
    int arr[n];c++;
    printf("Enter the elements:");
    for(int i=0;i<n;i++,c++)
    {
        scanf(" %d",&arr[i]);c++;
    }
    printf("The elements are:");
    for(int i=0;i<n;i++,c++)
    {
        printf(" %d",arr[i]);c++;
    }
    for(pass=0;pass<n-1;pass++,c++)
    {
        for(j=0;j<n-pass-1;j++,c++)
        {
            if(arr[j]>arr[j+1])
            {c++;
                temp=arr[j];c++;
                arr[j]=arr[j+1];c++;
                arr[j+1]=temp;c++;
            }
        }
    }
    printf("\nIn ascending order:");
    for(int i=0;i<n;i++,c++)
    {
        printf("%d ",arr[i]);c++;
    }
    printf("\nThe space complexity is: %d",24+n*4);c++;
    printf("\nThe time complexity is: %d",c+2);
    return 0;
}
