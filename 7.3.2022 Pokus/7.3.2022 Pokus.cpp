#include <stdio.h>
#include <math.h>

//Funkce faktoriál
long faktorial(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return x * faktorial(x - 1);
	}
}

//Rekurzi lze obvykle linearizovat

//Pomocí rekuezi funkcí, vypočtěte počet buněk po N dnech, když za každý den se počet buněk zdvojnásobí (na začátku je jedna)
long bunky(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return 2 * bunky(x - 1);
	}
}

//Fibonacciho posloupnost
long fibonacci(int x) {
	if (x < 2) {
		if (x < 1) {
			return 0;
		}
		else {
			return 1;
		}
	}
	else {
		return fibonacci(x - 1) + fibonacci(x - 2);
	}
}

//Úročení po dnech (složený úrok)
long urok(int x) {
	int a = 10000;
	if (x < 1) {
			return 0;
	}
	else {
		return a*1,12;
	}

}


int main()
{
	printf("Fibonacciho posloupnost\n");
	for (int i = 0; i < 6; i++) {
		printf("%2d. %2d\n", i, fibonacci(i));
	}

	printf("\n");

	printf("Slozene uroceni - 10 000Kc - urok 12% rocne\n");
	for (int j = 0; j < 6; j++) {
		printf("%2d.rok %2d\n", j, fibonacci(j));
	}
}