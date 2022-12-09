#include<stdio.h>
int main()
{
	int a;
	int b;
	int ebob;
	
	printf("lutfen 1. sayiyi giriniz\n");
	scanf("%d",&a);
	printf("lutfen 2. sayiyi giriniz\n");
	scanf("%d",&b);
	int i=2;
	for(i;i<a&&i<b;i++)
	{
		if(a%i==0&&b%i==0){
			printf("\nortak bolenler= %d",i);
			ebob=i;
		}
	
	}
	printf("\nsayilarin ebobu = %d",ebob);
	return 0;
}
