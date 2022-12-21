#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("lutfen armstrong olup olmadýðýný kontrol etmek istediðiniz sayiyi girin :\n");
	scanf("%d",&n);
	int a=n;
	int b=n;
	int sayac=0;
	int digit=0;
	int sum=0;
	while(a>0)
	{
		sayac++;
		a=a/10;
	}
	while(b>0)
	{
		digit=b%10;
		sum=sum+pow(digit,sayac);
		b=b/10;
	}
	if(sum==n)
	{
		printf("%d sayi armstrong sayisidir\n",n);
	}
	else
	{
		printf("%d sayi armstrong sayisi degildir\n",n);
	}
	return 0;
}
