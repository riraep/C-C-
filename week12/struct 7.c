#include <stdio.h>

struct Student {
	char name[101];
	int score;
};

int main() {
	struct Student students[5];
	int i, maxIdx = 0;

	for (i = 0; i < 5; i++) {
		scanf("%100s %d", students[i].name, &students[i].score);
		if (students[i].score > students[maxIdx].score) {
			maxIdx = i;
		}
	}

	printf("%s %d\n", students[maxIdx].name, students[maxIdx].score);

	return 0;
}