#include<stdio.h>
#include<windows.h>
void main()
{
	int i,n;
	printf("Enter the last number:");
	scanf("%d",&n);
for(i=0;i<=n;i+=5)
{
	printf("%d\n",i);
	Sleep(500);
}
}

