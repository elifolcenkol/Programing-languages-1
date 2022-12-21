#include<stdio.h>
int main()
{
	int a;
	int sum=0;
	int k;
	printf("lutfen polindrom olup olmadigini kontrol etmek istediginiz sayiyi girin\n");
	scanf("%d",&a);
	int b=a;
	while(a==0)
	{
		k=a%10;
		sum=sum*10+k;
		a=a/10;
		printf("degiþim :%d\n",a);
	}
	if(sum==b)
	{
		printf("sayi bir polindrom sayisidir :%d\n",b);
	}
	else
	{
		printf("sayi bir polindrom sayisi degildir :%d\n",b);
	}
	return 0;
}
