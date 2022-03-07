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

//Pomocí rekuez funkcí, vypočtěte počet buněk po N dnech, když za každý den se počet buněk zdvojnásobí (na začátku je jedna)
long bunky(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return 2 * faktorial(x - 1);
	}
}

int main()
{
	printf("1. %d\n", faktorial(1));
	printf("2. %d\n", faktorial(2));
	printf("3. %d\n", faktorial(3));
	printf("4. %d\n", faktorial(4));
}