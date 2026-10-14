#include<stdio.h>
int main ()
{
    char n [101], m[101];
    scanf ("%s %s", &n, &m);
    
    // int length = strlen (m);
    // for(int i=0; i<=length; i++){ //len er equal cz \n tao boshabo n string e, tahole n er kono leftover char thakle baad pore jbe
    //  n[i]= m[i];
    // }
     
    strcpy (n, m);
    printf ("%s %s", n, m);
    return 0; 
}