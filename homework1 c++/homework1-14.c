#include<stdio.h>
int main(){
 int fact=1; 
    int n;
    
    printf("Bir sayi giriniz\n");
    scanf("%d",&n);
    
    while(n>0)
    {
        fact=fact*n;
		n--;                                      
    }
    printf("%d",fact);
    
return 0;

}

	


