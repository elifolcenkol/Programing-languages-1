#include<stdio.h>
int main()
{
int a;
int k;
int count=0;
printf("lutfen bir sayi giriniz\n");
scanf("%d",&a);
	while(a!=0)
	{
		k=a%10;
		a=a/10;
		int c=k;
		if(c==k){
			count++;
			
		}
		
		printf("\n rakamin sikligi = %d",count);
	}
	return 0;
}
