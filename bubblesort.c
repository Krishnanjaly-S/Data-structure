#include<stdio.h>
int main()
{
    int arr[20],n,pass,temp;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(pass=0;pass<n-1;pass++)
    {
        for(int j=0;j<n-pass-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("In ascending order:");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
}