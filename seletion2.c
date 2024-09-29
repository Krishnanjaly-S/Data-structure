#include <stdio.h>
int main() 
{
    int i=0,n, j, s, temp;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0; i<n;i++) 
    {
        scanf("%d", &a[i]);
    }
    i = 0;
    while (i < n-1) 
    {
        s = i;
        j = i + 1;
        while (j < n) 
        {
            if (a[s] > a[j]) 
            {
                s = j;
            }
            j++;
        }
        if (i != s) 
        {
            temp = a[i];
            a[i] = a[s];
            a[s] = temp;
        }
        i++;
    }
    printf("\nIn ascending order:\n");
    for (i=0; i<n;i++) 
    {
        printf("%d\t", a[i]);
    }
    return 0;
}