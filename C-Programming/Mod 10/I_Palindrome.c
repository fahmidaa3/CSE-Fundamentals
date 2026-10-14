#include<stdio.h>
#include <string.h>

int main ()
{
    char s[1001];
    scanf ("%s", s);
    int sz= strlen (s);
    char i, j;
    for (int i=0; i<sz/2; i++){
        for (int j=sz-1; j>=0; j--){
            if (s[i]==s[j]){
                printf ("YES");
            }
            else {
                printf ("NO");
            }
        } 
    }

    return 0; 
}