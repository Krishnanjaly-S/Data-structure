#include<stdio.h>
int main()
{
    int i,n,j,s,a[30];
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        s=i;
        for(j=i+1;j<n;j++)
        {
            if(a[s]>a[j])
            {
                s=j;
            }
        }
        if(i!=s)
        {
            int temp=a[i];
            a[i]=a[s];
            a[s]=temp;
        }
    }
    printf("In ascending order:");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}