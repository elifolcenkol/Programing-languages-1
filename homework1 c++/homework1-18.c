#include<stdio.h>
int main(){
	int n;
	int temp;
	int i=1;
	int ikilik[100];
	int j;
	
	printf("lutfen ondalık bir sayı giriniz\n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		ikilik[i]=temp%2;
		temp=temp/2;
		i++;
	}
	printf("&d sayisinin ikilik sistemdeki karsiligi :",n);
	for(j=i-1;j>0;j--);
	printf("%d",ikilik[j]);
	
return 0;
}
