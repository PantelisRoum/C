#include <stdio.h>

int main(void)
{
    int i;
    for (int i=111;i<=999;i++)
    {
        if ((i/100==4) || (i%10==6))
        continue;
        printf("%d\n",i);
        
    }
        

    return 0;
}

