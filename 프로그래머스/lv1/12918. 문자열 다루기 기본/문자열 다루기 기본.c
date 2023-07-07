#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int len = strlen(s); // 문자열의 길이가 4또는 6으로 정해둠.
    if(!(len == 4 || len == 6)) // -> 주어진 문자열이 4또는 6이 아닐 경우 return false 반환
        return answer = false;
    
    for(int i = 0; i<len; i++){
        if(s[i] >= 65){ // 아스키코드 65이상이면 영단어 포함됨
            return answer = false;
        }
    }
    
    return answer;
}