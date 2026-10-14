#include<stdio.h>

long long value(long long int M, long long int A, long long int B, long long int C){
     long long int mul = A*B*C;
    if(mul== 0){
        if(M== 0){
            return 0;
        }else{
            return -1;
        }
    }
    if (M%mul ==0){
        return M/mul;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld",&M,&A,&B,&C);

        long long int ans= value(M, A, B, C);
        printf("%lld\n", ans);
    }

    return 0;
}
