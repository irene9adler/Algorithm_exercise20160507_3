#include <stdio.h>
//积分赛第一场A

int main()
{
    int n,result;
    scanf("%d",&n);
    int l = n%3;
    if(l==0) result = 2*(n/3);
    else result = 2*(n/3)+1;
    printf("%d\n",result);
    return 0;
}
