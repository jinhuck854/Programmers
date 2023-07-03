#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof("수") * n);
    strcpy(answer, ""); // 초기화
    
    for(int i = 0; i<n; i++){
        if(i % 2 == 0)
            strcat(answer, "수"); // char형 문자열 붙이기 함수
        else
            strcat(answer, "박");
    }

    return answer;
}