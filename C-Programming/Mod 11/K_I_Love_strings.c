#include<stdio.h>
int main ()
{
    int n;
    scanf ("%d", &n);
    char x[51], y[51];
    for (int t=0; t<n; t++){
        scanf ("%s %s", x, y);
    } 
    int i=0;
    while (x[i]!=0 || y[i]!=0){
      if (x[i] != '\0') {
      printf("%c", x[i]);}
   if (y[i] != '\0') 
  {printf("%c", y[i]);
    }
      i++;

    }
    printf ("\n");


    return 0; 
}