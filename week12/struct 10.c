#include <stdio.h>
#include <string.h>

struct Person {
	char name[101];
	int height;
	double weight;
};

int main() {
	struct Person people[5];
	struct Person temp;
	int i, j;

	for (i = 0; i < 5; i++) {
		scanf("%100s %d %lf", people[i].name, &people[i].height, &people[i].weight);
	}

	// 이름의 사전순으로 정렬 (버블 정렬)
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (strcmp(people[j].name, people[j + 1].name) > 0) {
				temp = people[j];
				people[j] = people[j + 1];
				people[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%s %d %g\n", people[i].name, people[i].height, people[i].weight);
	}

	return 0;
}