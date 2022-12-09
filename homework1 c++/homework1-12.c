#include<stdio.h>
int main(){
	int l;
	int h;
	int a;
	int sum=0;
		printf("bir low degeri giriniz\n");
		scanf("%d",&l);
		printf("bir hihg degeri giriniz\n");
		scanf("%d",&h);
		printf("istediðiniz artis miktarini girin\n");
		scanf("%d",a);
	for(l;l<=h;l=l+a){
		sum=sum+l;
		printf("%d\n",l);
	}
	return 0;
}
