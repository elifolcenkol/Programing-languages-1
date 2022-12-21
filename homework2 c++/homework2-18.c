#include<stdio.h>
int main()
{
	int a,d,f,g,k,c,l;
	printf("lutfen floyd ucgeninizin kac satýr olmasisini istediginizi yaziniz\n");
	scanf("%d",&a);
	int b=1;
	for(b;b<=a;)
	{
		if(b%2==1)
		{
			f=1;
			d=b-1;
			while(d>=0)
			{
				l=f%2;
				printf("%d",l);
				d--;
				++f;
			}
		}
		else if(b%2==0)
		{
			g=2;
			d--;
			++g;
		}
		++b;
		printf("\n");
	}
	return 0;
}
