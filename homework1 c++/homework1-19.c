#include<stdio.h>
int main(){
	int a;
	int f;
	int b=1;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	printf("%d\n",1);
	while(b<=10){
		
		f=b*a;
		b++;
		printf("%d\n",f);
		
	}
	return 0;
}
