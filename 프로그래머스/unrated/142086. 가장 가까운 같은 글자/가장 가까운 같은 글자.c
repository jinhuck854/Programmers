#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc((strlen(s) + 1) * sizeof(int));
    int* compare = (int*)malloc(strlen(s) * sizeof(int));
    int len = strlen(s);
    
    // 1. 배열에 banana를 넣음 // 97~122 : a~z까지
    // 2. 배열 0부터 n까지 중복 검사를 실시. 
    
    // 임시 배열에 아스키코드표로 변환해서 넣음
    for(int i = 0; i<len; i++){
        compare[i] = *(s+i);
        //printf("%d\n", compare[i]);
    }
    
    // 배열 0은 항상 -1값
    answer[0] = -1;
    
    // 배열 1부터 검사해서, 가까운 순서 시이ㅣ이이잉발
    for(int i = 1; i<len; i++){
        for(int j = i-1; j>=0; j--){
            if(compare[i] == compare[j]){
                answer[i] = i - j;
                break;
            }
            else if(j == 0){
                answer[i] = -1;
                break;
            }     
        }
    }
    
    return answer;
}