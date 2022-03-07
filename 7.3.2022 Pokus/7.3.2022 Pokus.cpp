#include <stdio.h>

//Funkce faktoriál
long faktorial(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return x * faktorial(x - 1);
	}
}



int main()
{
	printf("1. %d\n", faktorial(1));
	printf("2. %d\n", faktorial(2));
	printf("3. %d\n", faktorial(3));
	printf("4. %d\n", faktorial(4));
}