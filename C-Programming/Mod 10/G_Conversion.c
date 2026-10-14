#include<stdio.h>
int main ()
{
    char s[100001];
    scanf ("%s", s);
    fgets (s, 21, stdin); 
    for (int i=0; i<s[i]; i++){
        if (s[i]==','){
            s[i]='\0';
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        else if (s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    printf ("%s", s);
    return 0; 
}