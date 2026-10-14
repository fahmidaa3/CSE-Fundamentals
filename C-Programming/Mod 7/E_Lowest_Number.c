#include<stdio.h>
int main ()
{
     int n,i;
    scanf ("%d", &n);
    int arr[n];
    for (int i= 0; i<n ; i++){
    scanf("%d", &arr[i]);
    }
    int x= arr[0];
    int posi=1;
    for (int i= 0; i<n ; i++){
        if (arr[i]<x){
            x= arr[i];
            posi = i+1;
        }
        
    }
    printf ("%d %d ",x, posi);
    return 0; 
}