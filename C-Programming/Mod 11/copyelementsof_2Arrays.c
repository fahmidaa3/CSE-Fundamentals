#include<stdio.h>
int main ()
{
    int n;
    scanf ("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf ("%d", &a[i]);
    }
    int m;
    scanf ("%d", &m);
    int b[m];
    for (int i=0; i<m; i++){
        scanf ("%d", &b[i]);
    }
    int k[n+m];
    //scanf ("%d", &k);
    for (int i=0; i<n; i++){
        k[i]=a[i];
    }
    for (int i=0; i<m; i++){
        k[i+n]=b[i];
    }
    for (int i=0; i<n+m; i++){
        printf ("%d ", k[i]);
    }
    return 0; 
}