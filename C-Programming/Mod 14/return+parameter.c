#include<stdio.h>


//return type function name (parameter)
int sum (int x1, int x2)
{
    int val= x1+x2;
    return val;
}
int main ()
{
    int ans= sum (10, 5);
    printf ("%d", ans);
    return 0; 
}

//sum (10, 5) direct dewa na thakle main fn e input nibo

int sum (int a, int b){
    int ans= a+b;
    return ans;
}
int main (){
    int a,b;
    scanf ("%d %d", &a, &b);
    int ans = sum (a,b);
    printf ("%d", ans);
    return 0;
}