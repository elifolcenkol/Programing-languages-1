#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,cnt=0,sum=0,bsmk;
	printf("lutfen ondalik bir sayi giriniz\n");
	scanf("%d",&n);
	while(n>9)
	{
		bsmk=n%10;
		n=n/10;
		sum=sum+bsmk*pow(2,cnt);
		cnt++;
	}
	sum=sum+n*pow(2,cnt);
	printf("ikilik degeri :%d\n",sum);
	return 0;
}
