#include<stdio.h>
int main ()
{
    int n;
    scanf ("%d", &n);
      int m=(11+n)/2;

    int star=1;
    int space=m-1;
    for (int i=0; i<m; i++){
        for (int k=0; k<space; k++){
      printf(" ");
        }
        for (int j=0; j<star; j++){  
     printf ("*");
    } 
    printf ("\n");
    star+=2;
    space--;
}
m= 5;
space=5;
star=n;
for (int i=0; i<m; i++){
        for (int k=0; k<space; k++){
      printf(" ");
        }
        for (int j=0; j<star; j++){  
     printf ("*");
    } 
    printf ("\n");
   }
    return 0; 
}