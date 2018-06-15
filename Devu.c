#include<stdio.h>
int main()
{
    long long int n,d,count=0,i,sum=0,ft=0;
    int a[120];
    scanf("%lld %lld", &n, &d);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i] );
        sum+=a[i];
    }
   // printf("%d", sum);
    ft=(n-1)*10+sum;
   //     printf("%d", s1);
    if(ft<=d)
    {
        if(d-ft>=5)
        {
        count+=(n-1)*2+((d-ft)/5);
        }
        else
        {
            count+=(n-1)*2;
        }
    }
     if(ft>d)
    {
     count+=-1;
    }

    printf("%lld", count);

}
