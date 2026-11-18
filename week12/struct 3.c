#include <stdio.h>

int main() {
	char myName[] = "Yejun";
	int myAge = 12;
	char friendName[101];
	int friendAge;

	scanf("%100s %d", friendName, &friendAge);

	printf("Your name: %s, age: %d\n", myName, myAge);
	printf("Friend's name: %s, age: %d\n", friendName, friendAge);

	return 0;
}