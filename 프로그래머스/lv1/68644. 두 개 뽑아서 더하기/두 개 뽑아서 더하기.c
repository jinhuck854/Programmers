#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // 프로그래머스 연결 안 돼서 다시 함.
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int compare[10001]; // 100 * 100
    int index = 0;
    
    // 모든 수 더해서 배열 compare에 넣기
    for(int i = 0; i<numbers_len-1; i++){
        for(int j = i+1; j<numbers_len; j++)
            compare[index++] = numbers[i] + numbers[j];
    }
    
    // 선택 정렬 - 오름차순
    for(int i = 0; i < index-1; i++){
        int min = i;
        for(int j = i+1; j<index; j++){
            if(compare[j] < compare[min])
                min = j;
        }
        
        int temp = compare[i];
        compare[i] = compare[min];
        compare[min] = temp;
    }
    
    // 중복 수 없애서 answer 배열에 넣기
    int* answer = (int*)malloc((sizeof(int) * numbers_len) * index);
    for(int i = 0, n = 0; i<index; i++){
        answer[n++] = compare[i];
        
        while(compare[i] == compare[i+1]) // 중복 제거
            i++;
    }
    
    return answer;
}