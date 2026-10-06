#include <stdio.h>

// 삽입 정렬 함수
void insertionSort(int arr[], int n) {
    int i, j, key;

    // 1. 두 번째 원소(인덱스 1)부터 시작하여 마지막 원소까지 반복합니다.
    // (첫 번째 원소인 인덱스 0은 이미 그 자체로 정렬된 상태로 가정합니다)
    for (i = 1; i < n; i++) {
        
        // 이번에 정렬할 타겟이 되는 값을 'key' 변수에 임시로 저장합니다.
        key = arr[i];
        
        // 2. key 바로 왼쪽 원소의 인덱스를 j로 지정합니다.
        j = i - 1;

        // 3. 정렬된 왼쪽 그룹을 역순으로 탐색하며, key보다 큰 값들을 오른쪽으로 한 칸씩 밀어냅니다.
        // (배열의 끝까지 갔거나, key보다 작은 값을 만나면 반복을 멈춥니다)
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // 오른쪽으로 한 칸 이동
            j--;                 // 왼쪽 칸으로 이동하여 계속 비교
        }

        // 4. 반복문이 멈춘 위치(j + 1)에 아까 보관해 둔 key 값을 알맞게 삽입합니다.
        arr[j + 1] = key;

        /* [디버깅/학습용] 각 단계별 배열 상태 출력 */
        printf("%d단계 후 (key=%d): ", i, key);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {34, 11, 25, 64, 22, 12, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("[삽입 정렬 - Insertion Sort]\n");
    printf("정렬 전 배열: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n------------------------------\n");

    insertionSort(arr, n);

    printf("------------------------------\n");
    printf("최종 정렬된 배열: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}