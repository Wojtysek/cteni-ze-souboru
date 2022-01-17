#include <stdio.h>

int main(void) {
	// cteni ze souboru
	FILE* soubor = fopen("pokus.txt", "r");
	if (soubor == NULL) {
		printf("chyba: Soubor nelze otevrit pro cteni.\n");
		return 1;
	}
	char buffer[1024];
	int pocitadlo = 0;
	while (fgets(buffer, sizeof(buffer), soubor) != NULL) {
		pocitadlo++;
		printf("%d %s", pocitadlo, buffer);
		}

	if (fclose(soubor) == EOF) {
		printf("chyba: soubor se nepodarilo zavrit.\n");
		return 1;
	}
	return (0);
}