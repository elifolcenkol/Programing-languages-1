#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int sum=0;
	printf("lutfen seri toplamýn sinirini belirleyen tek sayiyi giriniz\n");
	scanf("%d",&a);
	int x=a;
	int b=1;
	int k;
	while(b<=a)
	{
	b=b+2;
	k=pow(b,b);
	sum=sum+k;
	printf("ara ýslemler :%d\n",sum);	
	}
	//sum=sum+x;
	printf("sonuc :%d\n");
	return 0;
}
