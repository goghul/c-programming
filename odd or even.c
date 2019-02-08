#include<stdio.h>
int main()
{
    int o;
    scanf("%d",&o);
    if(o>0)
    {
    if(o%2==1)
    {
        printf("Odd");
    }
   else
    {
        printf("Even");
    }
        }
    else
    {
        printf("ERROR");
    }

return 0;
}
