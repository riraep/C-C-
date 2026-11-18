#include <stdio.h>

int main() {
	char name[101];
	int age;

	scanf("%100s", name);
	scanf("%d", &age);

	printf("Your name is %s and you are %d years old.\n", name, age);

	return 0;
}