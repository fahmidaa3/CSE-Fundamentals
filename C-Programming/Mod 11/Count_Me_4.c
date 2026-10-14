#include<stdio.h>
#include <string.h>
int main ()
{
    char s[10005];
    scanf ("%s", s);
    int len = strlen(s);
    int fre_arr[26]={0};
    for (int i=0; i<len; i++){
      int idx = s[i]-'a';
      fre_arr[idx]++;
    }

    for (int i=0; i<26; i++){
        if (fre_arr[i]!=0){
            printf ("%c - %d\n", i+'a', fre_arr[i]);
        }
    }
    return 0; 
}