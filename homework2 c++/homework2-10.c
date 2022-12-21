#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("lutfen 1- n araliginda amstorng yazdýrmak istediginiz n degerini girin:\n");
	scanf("%d",&n);
	int a=n;
	int b=n;
	int sayac=0;
	int digit=0;
	int sum=0;
	
	for(n;n<=0;n--)
	{
	
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
			printf("%d sayilarý armstrong sayisidir\n",n);
    }
	
   }
	return 0;
}
