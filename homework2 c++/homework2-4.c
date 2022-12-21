#include<stdio.h>
int main()
{
	int a=1;
	int sum=0;
	int count =1;
	printf("lutfen bir harfe basiniz\n");
	scanf("&d",&a);
	while(count<=50)
	{
		sum=sum+a;
		a++;
		count++;
	}
	printf("%d",sum);
	return 0;
}
