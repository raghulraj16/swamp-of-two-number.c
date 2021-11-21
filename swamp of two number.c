#include<stdio.h>
int main()
{
	int x = 20, y = 5;

	// Code to swap 'x' and 'y'
	x = x + y; // x now becomes 25
	y = x - y; // y becomes 20
	x = x - y; // x becomes 15

	printf("After Swapping: x = %d, y = %d", x, y);
        return 0;
}
