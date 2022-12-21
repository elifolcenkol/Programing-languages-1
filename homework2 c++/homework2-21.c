#include<stdio.h>
int main()
{
	int n;
	printf("lutfen isleminiz icin sinir olan n degerini giriniz\n");
	scanf("%d",&n);
	int sum=0;
	int cnt=1;
	int a=1;
	for(cnt;cnt<=n;cnt++)
	{
		sum=sum+a;
		a=a*10;
		printf("ara islemler :%d\n",sum);
		
	}
	printf("sonuc: %d",sum);
	return 0;
}
