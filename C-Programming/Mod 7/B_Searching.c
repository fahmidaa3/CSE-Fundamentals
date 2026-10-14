// #include<stdio.h>
// int main ()
// {
//     int n;
//     scanf ("%d", &n);
//     int arr[n], x, y;
//     for (int i=0; i<n; i++){
//         scanf ("%d", &arr[i]);
//     } scanf ("%d", &x);
//       for (int i=0; i<n; i++){
//         if (arr[i]==x){
//             printf ("%d", i);
            
//         }
//         }   
        
//                 printf ("-1");
            
//     return 0; 
// }


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int i;
    int x;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            printf("%d\n", i);
            break;
        }
    }
    if (i == n)
    {
        printf("-1\n");
    }
    return 0;
}