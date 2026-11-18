#include <stdio.h>

struct Person {
	char name[101];
	int height;
};

int main() {
	struct Person people[3];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%100s %d", people[i].name, &people[i].height);
	}

	for (i = 0; i < 3; i++) {
		printf("%s : %dcm\n", people[i].name, people[i].height);
	}

	return 0;
}