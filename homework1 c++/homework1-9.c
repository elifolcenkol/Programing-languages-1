#include<stdio.h>
int main(){

	int h;
	int l;
	int a;
	printf("lutfen bir tam say� giriniz\n");
	scanf("%d",&h);
	printf("lutfen bir tam say� giriniz\n");
	scanf("%d",&l);
	printf("lutfen istedi�iniz at�� miktar�n� giriniz\n");
	scanf("%d",&a);
 if(h>=l){
		for(l;l>=h;l=l+a){
		
		printf("%d\n",l);
	}
}
 else {
		for(h;h<=l;h=h+a){
			printf("%d\n",h);
		}
	}
	
	return 0;
}
