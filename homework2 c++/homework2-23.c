#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,i=0,sum=0;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&n);
	while(n>=2)
	{
		sum=sum+(n%2)*pow(10,i);
		n=n/2;
		i++;
	}
	sum=sum+n*pow(10,i);
	printf("binary degeri :%d\n",sum);
	return 0;
}
