#include<stdio.h>
int main ()
{    char s[1001];
    char t[1001];
     scanf ("%s %s", &s, &t);
     int sz1=strlen (s);
     int sz2=strlen (t);
     printf ("%d %d\n", sz1, sz2);
     printf ("%s %s", s, t);
    
    return 0; 
}