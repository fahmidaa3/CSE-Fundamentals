#include <stdio.h>
#include <string.h>
int is_palindrome(char s[]){
    int len = strlen(s);
    for(int i = 0; i<len; i++){
        if(s[i]!=s[len-i-1]){
            return 0;
        }
    }
    return 1;
}
int main() {
    char s[1005];
    scanf("%s", s);
    int ans = is_palindrome(s);
    if(ans >0){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}