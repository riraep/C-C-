#include <stdio.h>

struct Person {
	char name[101];
	int height;
};

int main() {
	struct Person people[5];
	int i, minIdx = 0;

	for (i = 0; i < 5; i++) {
		scanf("%100s %d", people[i].name, &people[i].height);
		if (people[i].height < people[minIdx].height) {
			minIdx = i;
		}
	}

	printf("%s %d\n", people[minIdx].name, people[minIdx].height);

	return 0;
}