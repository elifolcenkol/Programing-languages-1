#include<stdio.h>
int main(){
	int a;
	int sayac=0;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	while(a>0){
		a=a/10;
		sayac++;	
	}
printf("sayi %d basamaklidir",sayac);
return 0;
}
