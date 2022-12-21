#include<stdio.h>
int main()
{
	int n;
	printf("lutfen asal sayilari gormek istediginiz sayiyi yaziniz :\n ");
	scanf("%d",&n);
	int i,j,sayac=0;
	for(i=2;i<=n;i++)
	{	
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				sayac=sayac+1;
			}
		}
			if(sayac==2)
			{
				printf("%d\n",i);
			}
			sayac=0;
		}
		return 0;
	}
	
