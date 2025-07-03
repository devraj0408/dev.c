/*Swapping question*/
#include<stdio.h>
int main(){ int temp;
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    temp=a,
    a=b,
    b=temp,
    printf("%d%d",a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}