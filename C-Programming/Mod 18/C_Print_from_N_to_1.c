#include<stdio.h>
void numbers(int n){
    for (int i=n;i>=1; i--){
        if (i==1){
            printf("%d",i);
        }
        else{
           printf ("%d ", i);
        }

    }
}
int main ()
{
    int n;
    scanf("%d", &n);
    numbers(n);
    return 0; 
}