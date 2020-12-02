#include <stdio.h>

void fibonaci(int n,int x,int y)
{
    if (x==0)
    {
        if(n==1)
            printf("%d ",x);
        else
            printf("%d %d ",x,y);
        n=n-2;
    }
    if (n<=0)
        return;
    else{
        int s3 = x + y;
        printf("%d ",s3);
        fibonaci(n-1,y,s3);
    }
}

int main()
{
    int n;
    printf("Enter a positive number upto n: ");
    scanf("%d",&n);
    fibonaci(n,0,1);

}