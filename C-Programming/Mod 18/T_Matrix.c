#include<stdio.h>
int main ()
{
    int r;
    
    scanf ("%d", &r);
    int c= r;
    int a[r] [c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &a[i] [j]);
        }
    }
    int sum1=0;
    int sum2=0;
    if (r==c){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (i==j){
                sum1+=a[i][j];
            }
    if (i+j==r-1){
        sum2+=a[i][j];
    }
    }
}
  int sum= abs (sum1-sum2);
  printf ("%d", sum);
    }
    return 0; 
}