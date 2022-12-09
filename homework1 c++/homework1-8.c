#include<stdio.h>
int main(){
	int a;
	int b;
	int sum=0;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&b);
if(a>b){
		for(b;b<=a;b++){
		sum=b+sum;
		}
		
	
		
	printf("%d",sum);
		
}
else{
	for(a;a<=b;a++){
		sum=a+sum;
	}
printf("%d",sum);
return 0;


	}
	printf("%d",sum);
	
return 0;
}
