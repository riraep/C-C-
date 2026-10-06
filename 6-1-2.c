#include <stdio.h>

// 두 변수의 값을 서로 바꾸는 함수 (값 교환)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 선택 정렬 함수
void selectionSort(int arr[], int n) {
    int i, j, min_index;

    // 1. 배열의 첫 번째 원소부터 마지막 직전 원소까지 반복합니다.
    // (마지막 원소는 자연스럽게 가장 큰 값으로 남게 되므로 n-1까지만 반복합니다)
    for (i = 0; i < n - 1; i++) {
        
        // 이번 회차(패스)에서 가장 작은 값을 가진 데이터의 인덱스를 'i'로 가정합니다.
        min_index = i;

        // 2. i 바로 다음 원소부터 배열의 끝까지 순회하며 진짜 최솟값을 찾습니다.
        for (j = i + 1; j < n; j++) {
            // 만약 현재 가정된 최솟값보다 더 작은 값이 발견된다면,
            if (arr[j] < arr[min_index]) {
                // 최솟값의 인덱스(min_index)를 해당 위치(j)로 갱신합니다.
                min_index = j;
            }
        }

        // 3. 찾은 최솟값의 위치(min_index)가 처음 가정했던 위치(i)와 다를 경우, 두 원소의 자리를 바꿉니다.
        if (min_index != i) {
            swap(&arr[i], &arr[min_index]);
        }

        /* [디버깅/학습용] 각 단계별로 배열이 어떻게 정렬되어가는지 출력합니다. */
        printf("%d단계 후: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    // 정렬되지 않은 임의의 배열을 선언합니다.
    int arr[] = {64, 25, 12, 22, 11};
    
    // sizeof(arr) / sizeof(arr[0])을 통해 배열의 전체 요소 개수(길이)를 구합니다.
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n------------------------------\n");

    // 선택 정렬 함수를 호출합니다.
    selectionSort(arr, n);

    printf("------------------------------\n");
    printf("최종 정렬된 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}