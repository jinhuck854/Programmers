#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int) * 12);
    // Why long long?
    
    for(int i = 0; n != 0; i++){
        answer[i] = n%10; // 10의 자리로 나누면 1의 자리만 남음
        n /= 10; // 1의 자리를 제거
    }
    
    return answer;
}