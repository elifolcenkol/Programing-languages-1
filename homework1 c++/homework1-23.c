#include<stdio.h>
int main()
{
	int a;
	int ters;
	int k;
	int b;
	printf("lutfen bir sayi girin\n");
	scanf("%d",&a);
	b=a;
	
	while(a!=0)
	{
    k=a%10;
	ters=ters*10+k;
	a=a/10;	
	}
	if(b==ters)
	{
		printf("%d polindromdur\n",b);
	}
	else
	{
	     printf("%d polindrom değildir\n",b);
}
return 0;
	
}
