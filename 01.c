#include<stdio.h>

int main()
{
	int n1, n2;
	printf("Enter the two no.: ");
	scanf("%d%d",&n1,&n2);
//using int data type	
	printf("sum : %d\n ",n1 + n2);
	(n1 > n2 )?printf("difference : %d\n",n1 - n2):printf("Diffrence : %d\n",n2 -n1);
	printf("product: %d\n\n", n1 * n2);	


	printf("sum : %d\n ",n1 + n2);
	printf("difference : %d\n",n2 - n1);
	printf("product: %d\n", n1 * n2);	
	return 0;
}
