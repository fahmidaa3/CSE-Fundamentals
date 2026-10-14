#include<stdio.h>
int main ()
{
    int n;
    scanf ("%d", &n);
    char a[n];
    for (int i=0; i<n; i++){
        scanf ("%s", &a);
    }
    int sum=0;
     for (int i=0; i<n; i++){
        int val = a[i]-'0';
          sum+= val;
    }
     
        printf ("%d", sum);
    
    return 0; 
}