#include<stdio.h>
void main()
{
    int A[50],i,n,max;
    printf("Enter number of element");
    scanf("%d",&n);
    printf("Enter %d element",n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    max=A[0];
    for(i=1;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    printf("max element = %d",max);
}