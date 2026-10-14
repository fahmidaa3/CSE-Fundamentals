#include<stdio.h>
int main ()
{
    int n;
    scanf ("%d", &n);
    int first_d = n/1000;
    if (first_d %2==0){
        printf ("EVEN");
    } else {
        printf("ODD");
    }
    //printf ("%d", first); print korte chaile
    return 0; 
}