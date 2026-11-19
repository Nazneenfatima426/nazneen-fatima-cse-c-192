#include<stdio.h>
int main()
//while progam to input n elements
{
    int n,i;
    printf("enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements :\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements in the array are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}

