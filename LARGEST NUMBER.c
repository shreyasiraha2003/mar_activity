#include <stdio.h>
int main()
{
    int num1,num2,num3;
	
	printf("\n\n\t***FIND THE LARGEST NUMBER***\n");
	
    printf("\nENTER THE FIRST NUMBER - ");
    scanf("%d",&num1);

    printf("\nENTER THE SECOND NUMBER - ");
    scanf("%d",&num2);

    printf("\nENTER THE THIRD NUMBER - ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    	printf("\n\n%d IS THE LARGEST NUMBER",num1);
    
    else if(num2>num1 && num2>num3)
   		printf("\n\n%d IS THE LARGEST NUMBER",num2);

	else if(num3>num1 && num3>num2)
    	printf("\n\n%d IS THE LARGEST NUMBER",num3);
    
    return 0;
}
