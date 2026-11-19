#include<stdio.h>
int main()
{
    int rows ,cols, i,j;
    printf("enter the number of rows:");
    scanf("%d",& rows);
    printf("enter the number of columns :");
    scanf("%d",& cols);
    int arr[rows][cols];
    printf("enter elements for 2D array:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols ;j++)
        {
            printf("elements at[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the elements in the 2D array are :\n");
    for(i=0;i<rows ;i++)
    {

        for(j=0; j<cols ;j++)
    {
        printf("%d",& arr[i][j]);

    }

    }
    return 0;
}
