#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int hesh = 1;
    int space = n - 1;

    
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= space; k++)
            printf(" ");

        for (int j = 1; j <= hesh; j++) {
            if (i % 2 == 1)
                printf("#");
            else
                printf("-");
        }
        printf("\n");

        hesh += 2; 
        space--;
    }

  
    hesh =2*n-3;
    space = 1;

    for (int i = n - 1; i >= 1; i--) {
        for (int k = 1; k <= space; k++)
            printf(" ");

        for (int j = 1; j <= hesh; j++) {
            if (i % 2 == 1)
                printf("#");
            else
                printf("-");
        }
        printf("\n");

        hesh -= 2;
        space++;
    }

    return 0;
}
