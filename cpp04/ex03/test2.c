
#include <stdio.h>
#include <stdlib.h>

void print(int *a)
{
	/* a[2] = 10;
	printf("print\n");
	for (int i = 0; i < 3; i++)
	{
		printf("a = %d\n", a[i]);
	} */
	//a++;
	printf("ap = %p : a = %d\n", a, *a);
}

int main() {
	//int i;

	int *ptr;

	//i = 20;

	//ptr = &i;
	ptr = (int *)malloc(sizeof(int) * 3);
	for (int i = 0; i < 3; i++)
	{
		ptr[i] = i;

	}
	print(ptr);
	printf("pp = %p : p = %d\n", ptr, *ptr);
	for (int i = 0; i < 3; i++)
	{
		printf("ptr = %d\n", ptr[i]);
	}
	return (0);
}