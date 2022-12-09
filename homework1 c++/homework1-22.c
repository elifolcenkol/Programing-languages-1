#include<stdio.h>
int main(){
	int a;
	int sayac;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	int b=a;
	while(a>0){
		a=a/10;
		sayac++;
		
	}
		printf("SAYAC= %d",sayac);
	int c=1;
	for(c=1;sayac<=c;c++){
		b=b/10;
		printf("%d",b);
		
	}
	return 0;
	
}
