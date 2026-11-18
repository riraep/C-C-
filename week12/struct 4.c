#include <stdio.h>

struct Student {
	char school[101];
	int grade;
};

int main() {
	struct Student s1 = { "Jejuelementary", 6 };
	struct Student s2;

	scanf("%100s %d", s2.school, &s2.grade);

	printf("%d grade in %s School\n", s1.grade, s1.school);
	printf("%d grade in %s School\n", s2.grade, s2.school);

	return 0;
}