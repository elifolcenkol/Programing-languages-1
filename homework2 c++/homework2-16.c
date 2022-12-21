#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	float sum=0;
	printf("lutfen yapilan islemin sýnýr sayisini belirleyiniz\n");
	scanf("%d",&x);
	int fact=1;
	int i=2;
	float k;
	for(i;i<=x;i=i+4)
	{
		fact=fact*i;
		k=i^i/fact;
		sum=sum+k;
		printf("%d\n",sum);
	}
	return 0;
}
