#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int no, coef = 1, s, row, col;
	do
	{
		system("cls");
		printf("\n\t\t----***PATTERN PRINT USING LOOP***----\n");
		printf("\n\nENTER THE NUMBER OF ROW : ");
		scanf("%d",&no);
		fflush(stdin);
 		for (row = 0; row < no; row++) 
		{ 
		 	for (s = 1; s <= (no+10) - row; s++) 
		 		printf(" "); 
				for (col = 0; col <= row; col++) 
				{
				 	if (col == 0 || row == 0) 
					coef = 1; 
					else 
					coef = coef * (row - col + 1) / col; 
					printf("%3d", coef); 
				}
			printf("\n"); 
		}
    	printf("\n\nDO IT AGAIN ? IF YES PRESS y OR IF NO PRES ANY KEY : ");
    }while(getchar()=='y');
    return 0;
}
