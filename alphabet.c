#include <stdio.h>
int main()
{
    char b;
    printf("Enter any value: ");
    scanf("%c",&b);

    if( (b>='a' && b<='z') || (b>='A' && b<='Z'))
        printf(" Alphabet");
    else
        printf("NO");

    return 0;
}
