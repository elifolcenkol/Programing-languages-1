#include<stdio.h>
int main(){
	int n=1000;
	int sum=0;
	printf("lutfen bin sayisini giriniz\n");
	scanf("%d",&n);
	while(n<=2000){
		printf("%d\n",n);
		sum=sum+n;
		n=n+2;
		
	}
	printf("Sum: %d",sum);
	//return 0; 
	
}
