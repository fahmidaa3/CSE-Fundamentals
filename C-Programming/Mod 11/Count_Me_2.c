#include<stdio.h>
#include <string.h>

int main ()
{
    char arr[100001];
    scanf ("%s", arr);
    int st=strlen (arr);
    int idx= 0;
    for (int i=0; i<st; i++){
    if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u')
{
        idx ++;
    }
}
printf ("%d\n", idx);
    return 0; 
}