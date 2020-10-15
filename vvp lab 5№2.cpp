#include<stdio.h>
#include<math.h>


int main()
{
	int A, B, C;
	int x, y;
	printf("A: ");
	scanf_s("%d", &A);
	printf("B: ");
	scanf_s("%d", &B);
	printf("C: ");
	scanf_s("%d", &C);
	printf("%d",abs(C-A)+abs(C-B));
	return 0;
}