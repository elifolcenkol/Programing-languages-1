#include<stdio.h>
int main()
{
	int a;
	int b;
	int cevre;
	int alan;
	printf("lutfen dikd�rtgenin bir kerenarini giriniz\n");
	scanf("%d",&a);
	printf("lutfen dikd�rtgenin diger kenarini giriniz\n");
	scanf("%d",&b);
	
	cevre=2*a+2*b;
	alan=a*b;
	printf("cevre = %d\nalan = %d",cevre,alan);
	return 0;
	
}
