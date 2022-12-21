#include<stdio.h>
int main() {
    int n, yaz=1;
    
    printf("lutfen pascal ucgeninizin satir sayisi Girin:  \n");
    scanf("%d", &n);
    int i=0;
    
    for (i; i<n; i++) {
    	int space=1;
        for (space; space <= n-i; space++)
            printf("  ");
            int j=0;
        for (j; j<=i; j++)
		{
            if (j==0 || i==0)
                yaz = 1;
            else
                yaz=yaz*(i-j+1)/j;
            printf("%4d", yaz);
        }
        
        printf("\n");
    }
    return 0;
}
