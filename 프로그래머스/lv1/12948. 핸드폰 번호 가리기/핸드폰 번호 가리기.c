#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(phone_number);
    char* answer = (char*)malloc(len);
    strcpy(answer, phone_number);
    
    if(len == 4){ // 전화번호 길이가 4일 때
        return answer;
    }
    
    for(int i = 0; i<(len-4); i++) // 5 ~ 20이하일 때, *로 바꿈
        strcpy(answer+i, "*");
    
    strcat(answer, phone_number+(len-4)); // 뒷자리 4개 붙임

    return answer;
}