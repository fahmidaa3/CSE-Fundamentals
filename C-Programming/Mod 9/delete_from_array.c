#include<stdio.h>
int main ()
{
    int n;
    scanf ("%d", &n);
    int a[n]; // pore 1 index baranu jbena.
    for (int i=0; i<n; i++){
        scanf ("%d", &a[i]);
    }
    int idx;
    scanf ("%d", &idx);
    for (int i=idx; i<n-1; i++){
        a[i]= a [i+1];
    }
    //n-- (int n nisi ii array er size er jnno, just n komai dilam)
    for (int i=0; i<n-1; i++){
        printf ("%d ", a[i]);
    }

    return 0; 
}