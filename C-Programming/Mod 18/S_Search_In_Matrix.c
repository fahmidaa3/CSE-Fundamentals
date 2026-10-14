#include<stdio.h>
int main ()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf ("%d",&arr[i][j]);
        }
    }
    int x;
    int flag=0;
    scanf("%d", &x);
     for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (arr[i][j]==x){
                flag=1;
                
            }
            
        }
    }
    if (flag==0){
         printf ("will take number");
     } else {
        printf ("will not take number");
         }
    
    return 0; 
}