#include <stdio.h>
int main(void)
{
    int i,j ;
    printf("Enter 2 integers");
    scanf("%d%d",&i,&j);
    printf("sum=%d Diff=%d prod=%d Div=%f\n", i+ j,i - j,i*j,(double)i/j);
       return 0;
}
