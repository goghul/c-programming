#include <stdio.h>
int main() 
{
int r,s,d,p,t;
printf("Enter the Source:");
scanf("%d",&s);
printf("Enter the Destination:");
scanf("%d",&d);
r=d-s;
if(r>0)
{
	printf("1.Mini\n2.Micro\n3.Prime\nEnter the type of travel:");
	scanf("%d",&t);
	switch(t)
	{
	  case 1:
		p=r*2;
		printf("amount:%d",p);
	    break;
	  case 2:
		p=r*5;
		printf("amount:%d",p);
	    break;
	  case 3:
		p=r*7;
		printf("amount:%d",p);
	    break;
	}
	
}




	return 0;
}
