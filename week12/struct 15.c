#include <stdio.h>

// 직사각형: 왼쪽 아래 (x1, y1), 오른쪽 위 (x2, y2)
struct Rect {
	int x1, y1, x2, y2;
};

int main() {
	struct Rect a, b, result;

	scanf("%d %d %d %d", &a.x1, &a.y1, &a.x2, &a.y2);
	scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);

	// 두 직사각형을 모두 포함하는 최소 직사각형
	result.x1 = (a.x1 < b.x1) ? a.x1 : b.x1;
	result.y1 = (a.y1 < b.y1) ? a.y1 : b.y1;
	result.x2 = (a.x2 > b.x2) ? a.x2 : b.x2;
	result.y2 = (a.y2 > b.y2) ? a.y2 : b.y2;

	printf("%d %d %d %d\n", result.x1, result.y1, result.x2, result.y2);

	return 0;
}