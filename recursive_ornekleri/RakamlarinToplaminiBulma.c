#include <stdio.h>


int sum (int num)
{
	if (num != 0)	
	return (num % 10 + sum (num / 10));	
	else
	return 0;
	
}
int main()
{
	int num, result;
	printf("rakamlarinin toplamini bulmak istediginiz sayiyi girin:");
	scanf("%d", &num);
	result = sum(num);
	printf("%d sayisinin rakamlarinin toplami: %d\n", num, result);
	return 0;
}
