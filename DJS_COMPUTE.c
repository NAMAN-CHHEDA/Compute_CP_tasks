#include <stdio.h>

int main()
{
  //TASK 1:
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a % b == 0)
    {
    }
    else{
        printf("%d", (b-(a%b)));
    }

    return 0;
}
