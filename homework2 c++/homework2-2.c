#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int x1;
	int x2;
	int delta;
	printf("lutfen istediginiz denklemin katsayilarini sirasiyla giriniz (3 tane tam sayi)\n ");
	scanf("%d %d %d",&a,&b,&c);
	delta=b*b-4*a*c;
	x1=(-b+(delta^(1/2))/2);
	x2=(-b-(delta^(1/2)/2));
	
	if(delta<0){
		printf("reel kok yoktur\n");
	}
	else if(delta==0){
		printf("esit iki kok vardır delta = %d x1 = %d x2 = %d",delta,x1,x2);
    }
    
	else{
		printf("birbirinden farkli iki kok vardir delta = %d x1 = %d x2 = %d",delta,x1,x2);
	}
	return 0;
}
