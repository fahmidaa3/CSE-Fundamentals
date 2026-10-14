#include<stdio.h>
int main ()
{
    int r,c;
    scanf("%d %d", &r,&c);

    int a[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    if (r!=c){
        printf("NO");
        return 0;
    }
    int is_jadu = 1; 

    for (int i=0;i<r; i++){
        for (int j=0; j<c; j++){
            if (i == j){
                if (a[i][j] != 1) {
                    is_jadu = 0;
            }
        }
            else if (i+j == r-1){
                if (a[i][j]!= 1) {
                    is_jadu = 0;
            }
        }
            else{
                if (a[i][j]!= 0) {
                    is_jadu = 0;
                }
            }
        }
    }
    if (is_jadu == 1) printf("YES");
    else printf("NO");

    return 0;
}
