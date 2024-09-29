#include <stdio.h>
int main(){
    int i=0,n,j,s,temp,c=0;c++;
    printf("Enter the no of elements:");
    scanf("%d",&n);c++;
    int A[n];c++;
    printf("Enter the elements:");
    for(i=0;i<n;i++,c++){
        scanf("%d",&A[i]);c++;
    }
    printf("The elements in the array are:");
    for(i=0;i<n;i++,c++)
    {
        printf(" %d",A[i]);c++;
    }
    i=0;c++;
    while(i<n-1){c++;
        j=i+1;c++;
        s=i;c++;
        while(j<n){c++;
            if(A[s]>A[j])
            {c++;
                s=j;c++;
            }
            j++;
        }c++;
        if(i!=s){c++;
            temp=A[i];c++;
            A[i]=A[s];c++;
            A[s]=temp;c++;
        }
        i++;
    }c++;
    printf("\nIn ascending order:");
    for(i=0;i<n;i++,c++)
    {
        printf("%d ",A[i]);c++;
    }
    printf("\nThe space complexity is: %d",24+n*4);c++;
    printf("\nThe time complexity is: %d",c+2);
    return 0;
}