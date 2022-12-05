#include<stdio.h>
int main()
{
	int num1,num2,sum,sub;
	int*ptr1,*ptr2;
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	ptr1=&num1;
	ptr2=&num2;
	sum=*ptr1+ *ptr2;
	sub=*ptr1- *ptr2;
	printf("sum :%d",sum);
	printf("\nSubtraction : %d",sub);
	return 0;
}
