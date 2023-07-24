#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    char* array = ""; // STACK 초기화 : NULL
    int num = 0;
    int len = strlen(s);
    
    for(int i = 0; i<len; i++){
        if(s[i] == '('){ // '(' 일 때
            array[num] = s[i];
            //printf("ARRAY : %d = %c\n", num, array[num]);
            num++;
        }
        else{ // ')' 일 때
            if(num < 1){ // STACK 비었을 때
                //printf("%d : %c\n", num, array[num]);
                return answer = false;
            }
            else{
                if(array[i-1] == ')'){ // 짝이 안 맞을 때
                    //printf("%d 짝 없음 : )\n", num);
                    return answer = false;
                }
                else if(num > 0){ // 짝이 맞을 때
                    num--;
                    array[num] == "";
                    //printf("CLEAR %d\n", num);
                }
            }
        }
    }
    
    if(num > 0){ // STACK 안 비어졌을 경우 == 짝이 안 맞는 경우
        //printf("STACK IS NOT EMPTY : %d\n", num);
        return answer = false;
    }
    
    return answer;
}