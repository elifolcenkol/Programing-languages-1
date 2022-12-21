#include<stdio.h>
int main()
{
	int a;
	int b;
	int cevre;
	int alan;
	printf("lutfen dikdörtgenin bir kerenarini giriniz\n");
	scanf("%d",&a);
	printf("lutfen dikdörtgenin diger kenarini giriniz\n");
	scanf("%d",&b);
	
	cevre=2*a+2*b;
	alan=a*b;
	printf("cevre = %d\nalan = %d",cevre,alan);
	return 0;
	
}
