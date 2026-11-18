#include <stdio.h>
#include <string.h>

struct Contact {
	char name[101];
	char tel[101];
	char addr[101];
};

int main() {
	struct Contact people[3];
	int i, firstIdx = 0;

	for (i = 0; i < 3; i++) {
		scanf("%100s %100s %100s", people[i].name, people[i].tel, people[i].addr);
		// 사전순으로 가장 앞서는 이름의 위치를 기억
		if (strcmp(people[i].name, people[firstIdx].name) < 0) {
			firstIdx = i;
		}
	}

	printf("name : %s\n", people[firstIdx].name);
	printf("tel : %s\n", people[firstIdx].tel);
	printf("addr : %s\n", people[firstIdx].addr);

	return 0;
}