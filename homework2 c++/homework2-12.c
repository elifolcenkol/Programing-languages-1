#include<stdio.h>
int main()
{
	int n;
	int mod;
	printf("lutfen mukemmel sayi olup olmadigini kontrol etmek istediginiz sayiyi girin :\n");
	scanf("%d",&n);
	int a=n;
	
	int i=1;
	int sum=0;
 
	 
	for(i;i<n;i++)
	{
		mod=n%i;
	 if(mod==0)
   {
		printf("sayinin bolenleri :%d\n",i);
		sum=sum+i;	
   }
	}
	if(sum==a)
	{
		printf("%d girdiginiz sayi bir mukemmel sayidir\n",a);
		printf("bolenlerin toplami :%d\n",sum);
	}
	else
	{
		printf("girdiginiz sayi mukemmel bir sayi degildir\n",a);
		printf("tam bolenleri toplami :%d\n",sum);
	}
	
	return 0;
}
