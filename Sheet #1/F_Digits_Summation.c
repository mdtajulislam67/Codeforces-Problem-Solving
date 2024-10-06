#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int x = n%10;
    long long int y = m%10;
    long long int sum=x+y;
    printf("%lld",sum);
    return 0;
}