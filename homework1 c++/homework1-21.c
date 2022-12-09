#include<stdio.h>
int main(){
	int a;
	int sayac=0;

	int k;
	
	printf("lutfen bir sayi girin\n");
	
	scanf("%d",&a);
	int b=a;
		while(a>0){
		a=a/10;
		sayac++;
		
	}
		printf("%d basamak sayisi\n",sayac);

		
	k=b%10;
	printf("%d son basamak\n",k);
	int c=b;
	while(c/10!=0){
		c=c/10;
			
	}
	printf("%d ilk basamak",c);
	return 0;
}
