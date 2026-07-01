#include <stdio.h>
int L(int n)
{
    if(n==0)
       return 0;
    else if(n==1)
       return 1;
    else if (n==2)
       return 1;
    return L(n-1)+L(n-2)+L(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",L(n));
    return 0;
}