#include<stdio.h>
int main()
{
	int n;
	int kalan;
	int sum=0;
	printf("lutfen mukemmel sayi olup olmad���n� kontro etmek istedi�iniz say�n� girin :\n");
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
		printf("%d girdiginiz say� bir mukemmel sayidir\n ",n);
	}
	else{
		printf("girdi�iniz sayi bir mukemmel sayi degildir\n",n);
	}
	printf("%d tam bolenlerin toplami :\n",sum);
	return 0;
}
