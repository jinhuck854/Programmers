#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    int len_t = strlen(t);
    int len_p = strlen(p);
    int len = len_t - len_p;
    
    char* temp = (char*)malloc(sizeof(char) * len_t);
    strcpy(temp, "");
    
    for(int i = 0; i<=len; i++){
        if(strncmp(t+i, p, len_p) <= 0){
            answer++;
            //printf("t : %s %s %d\n", t, p, i);
        }

    }

    
    return answer;
}