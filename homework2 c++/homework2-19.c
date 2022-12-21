#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	float sum=0;
	printf("lutfen yapilacak islemin sinir sayisini belirleyin\n");
	scanf("%d",&a);
	int b=1;
	float c;
	int fact=1;
	for(b;b<=a;b++)
	{
		fact=fact*b;
		c=pow(b,b)/fact;
		sum=sum+c;
		printf("ic islemler :%f\n",sum);
	}
	sum=sum+a;
	printf("toplamin sonucu :%f\n",sum);
	return 0;
}
