#include<stdio.h>
int main()
{
	int a=11;
	printf("lutfen 11 sayiyisini giriniz\n");
	scanf("%d",&a);
	int b=100;
	int sum=0;
	for(a;a<b;a++)
	{
		sum=sum+a;
		printf("ara islemler :%d\n",sum);
	}
	printf("10 ile 100 arasindaki sayýlarin toplami :%d",sum);
	return 0;
}
