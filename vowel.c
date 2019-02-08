#include<stdio.h>
int main()
{
    char a;
   
    scanf("%c",&a);
    if(('a'<=a&&a>='z')||(a<='Z'&&'A'<=a))

     {
     if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        
     printf("vowel");
    }
    else
    {
        
        printf("consonant");
    }
    
       
    
    
        
     }
     else
     printf("invalid");
    
    return 0;
}

