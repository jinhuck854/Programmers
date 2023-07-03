#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {    
    char* answer = (char*)malloc(strlen(s)); // 문자열 길이만큼 동적 할당
    int len = strlen(s);
    
    if(len % 2 == 0){ // 짝수
        answer[0] = s[(len/2)-1];
        answer[1] = s[(len/2)];
        answer[2] = '\0';
    }
    else{ // 홀수
        answer[0] = s[len/2];
        answer[1] = NULL;
    }
    
    return answer;
}