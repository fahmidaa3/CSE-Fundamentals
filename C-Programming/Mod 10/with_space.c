#include<stdio.h>
int main ()
{// enter keo count kre fget theme jay- limitation.
    char s[5];
    fgets (s, 5, stdin);
    printf ("%s", &s);
    return 0; 
}