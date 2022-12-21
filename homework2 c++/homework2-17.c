#include<stdio.h>
int main()
{
	int a;
	printf("lutfen yaptirmak istediginiz sinir sayisini belirleyin : ");
	scanf("%d",&a);
	float b=1;
	float sum=0;
	int count=1;
	
	while(count<=a)
	{
	b=1/b;
	sum=sum+b;
	printf("ara islemler :%f\n",sum);
	b++;
	count++;
	}
	printf("sonuc :%f",sum);
	return 0;
	
}
