#include<stdio.h>
int main()
{
	int n;
	int kalan;
	int sum=0;
	printf("lutfen mukemmel sayi olup olmadýðýný kontro etmek istediðiniz sayýný girin :\n");
	scanf("%d",&n);
	int a=n;
	int i=1;
	for(i;i<n;i++)
	{
		kalan=n%i;
	 if(kalan==0){
	 
		printf("%d\n",i);
		sum+=i;
		
}
	}
	if(sum==a)
	{
		printf("%d girdiginiz sayý bir mukemmel sayidir\n ",n);
	}
	else{
		printf("girdiðiniz sayi bir mukemmel sayi degildir\n",n);
	}
	printf("%d tam bolenlerin toplami :\n",sum);
	return 0;
}
