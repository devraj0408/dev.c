#include<stdio.h>
void main(const int argc, const char*argv[])
{
	int i;
	printf("\n argc = %d",argc);
	for(i=0;i<argc;i++)
{
printf("\n argv[%d] = %s",i,argv[i]);
}