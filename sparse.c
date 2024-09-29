#include<stdio.h> 
int main() 
{ 
int row,col,i,j,k=1,count=0; 
printf("Enter the no of rows and columns of the matrix:"); scanf("%d %d",&row,&col); 
int a[row][col]; 
printf("Enter the array elements:"); 
for(i=0;i<row;i++) 
{ 
    for(j=0;j<col;j++) 
    { 
        scanf("%d",&a[i][j]); 
    } 
} 
printf("The matrix is:\n"); 
for(i=0;i<row;i++) 
    { 
        for(j=0;j<col;j++) 
        { 
            printf("%d\t",a[i][j]); 
        } 
    printf("\n"); 
} 
if(a[i][j]!=0) 
{ 
count++; 
} 
int b[count+1][3]; 
b[0][0]=row,b[0][1]=col; 
for(i=0;i<row;i++) 
    { 
        for(j=0;j<col;j++) 
        { 
            if(a[i][j]!=0) 
            { 
                b[k][0]=i; 
                b[k][1]=j; 
                b[k][2]=a[i][j]; 
                k++; 
            } 
        } 
    } 
b[0][2]=k-1; 
printf("The array representation is:"); 
printf("\nRow\tColumn\tValue"); 
for(i=0;i<k;i++) 
{
    printf("\n%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]); 
} 
return 0; 
}
