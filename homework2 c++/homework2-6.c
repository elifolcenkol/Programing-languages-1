#include <stdio.h>
 
main()
{
    int n1,n2;
    int ebob;
    int ekok;
     
    printf("1.Sayiyi giriniz: ");
    scanf("%d",&n1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&n2);
    int i=2;
    for(i;i<n1&&i<n2; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
		{
            printf("Ortak bolenler = %d\n",i);
            ebob = i;
        }
    }
    ekok = (n1 * n2) / ebob;
    printf("\nSayilarin ekoku = %d",ekok);
    printf("\nSayilarin ebobu = %d",ebob);
}
