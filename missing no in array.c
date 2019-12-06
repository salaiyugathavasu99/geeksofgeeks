#include <stdio.h>

int main() 
{
    
    int T,r,i;
    scanf("%d", &T);
    long N,C,a,k;
    long arr[T];//Getting testcases
    for (r = 0;r <T; r++)
    { 
        scanf("%ld", &N);//Getting size of array
        a =0;
        for (i = 0; i <N-1; i++)
        {
            scanf("%ld",&C);
            a = a + C;
        }
        k = ((N*(N+1))/2)- a; // subtracting the overall sum of array elements 
        arr[r]=k; //saving it to array
    }
    for(r = 0; r < T; r++)
    {
        printf("%ld ",arr[run]);
    }
    return 0;
}