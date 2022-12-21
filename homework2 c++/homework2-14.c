#include<stdio.h>
int main()
{
	int n=1,bolen=1;
	int sayac=2;
	int a;
	printf("lutfen guclu sayilari yazdirmak istediginiz araliginn son degerini giriniz:\n");
	scanf("%d",&a);
	for(n;n<=a;n++)
	{
	
	while(sayac<=(n/2))
 {
     	if(n%sayac==0)
	{
	    bolen=bolen+sayac;
	}
	sayac++;
 }
 if(bolen>n)
 {
 	printf("girilen sayý aralýgýndaki guclu sayilar : %d\n",n);
 }
    } 

return 0;
}
