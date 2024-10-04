#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int Even=0;
    int Odd=0;
    int Pos=0;
    int Neg=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
        if(a[i]>0)
        {
            Pos++;
        }
        else if(a[i]<0)
        {
            Neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",Even,Odd,Pos,Neg);
    
    return 0;
}