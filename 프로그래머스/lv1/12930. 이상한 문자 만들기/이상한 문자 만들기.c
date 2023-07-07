#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    int len = strlen(s);
    char* answer = (char*)malloc(len);
    answer = strcpy(answer, s);
    int num = 0;
    
    for(int i = 0; i<len; i++){
        //printf("%c, %d\n", answer[i], num);
        if(answer[i] == ' '){
            num = 0;
            //printf("NULL, %d\n", num);
            continue;
        }
        
        if(num % 2 == 0 && answer[i] >= 97) // 소문자를 대문자로
            answer[i] -= 32;
        else if(num % 2 != 0 && answer[i] < 91) // 대문자를 소문자로
            answer[i] += 32;
        num++;
        //printf("%c, %d\n", answer[i], num);
    }
    
    return answer;
}