#include<stdio.h>
int main()
{
	int n,bolen=1;
	int sayac=2;
	printf("lutfen guclu olup olmadigini kontrol etmek istediginiz sayiyi giriniz :\n");
	scanf("%d",&n);
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
 	printf("girilen sayi gucludur %d\n");
 }
 else
 {
 	printf("girilen sayi guclu degildir %d\n");
 }

return 0;
}
