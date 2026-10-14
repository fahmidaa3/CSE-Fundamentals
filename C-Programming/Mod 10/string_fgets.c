#include<stdio.h>
//#include <string.h>
int main ()
{
    char s[12];
    //scanf ("%s", &s);
    fgets (s, 8, stdin); //limitation= enter press kre niche input dile enter count kre fele
    printf ("%s", s);
    return 0; 
}