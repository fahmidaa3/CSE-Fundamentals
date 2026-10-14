#include<stdio.h>

void jello ()
{
    printf ("jello");
}
void gello(){
    printf ("gello\n");
    jello ();
}
void hello()
{
    printf("hello\n");
    gello();
}
int main ()
{
    printf("hi\n");
    hello ();
    return 0; 
}