#include<stdio.h>
int main(){

float a;
printf("bir sicaklik degeri girin\n");
scanf("%f",&a);
if(a<=0){
	printf("donma noktasinin altýnda\n");
}
else{
	printf("donma noktasinin ustunde\n");
}
return 0;
}
