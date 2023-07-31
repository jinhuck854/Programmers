#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(food_len * 1000);
    
    // 1. food[] 배열은 순서대로 음식이 준비되어 있음
    // ex) food[0] : 항상 1(골인 지점), food[1] : 1번째 음식, food[2] : 2번째 음식
    // 2. 음식을 나열할 때, 상대방 선수와 똑같은 개수(food[i])를 나눠서 가져야함.
    // 3. 만약, 음식이 홀수라면 남는건 버림.
    // ex) food[1] = 5일 때, 2개씩 나눠서 먹으면 총 4개를 먹게됨. 남는 음식 1개는 버림.

    int index = 0;
    int food_num = 1;
    
    // 자기자신
    for(int i = 1; i<food_len; i++){
        if(food[i] > 1){ // 2이상 값 : 음식 2명이서 나누기 가능
            int temp = food[i]/2;
            
            for(int j = 0; j<temp; j++){
                //answer+index 문자열에 temp(정수)를 문자열로 변환하여 넣음
                sprintf(answer+index, "%d", food_num);
                index++;
            }
        }
        food_num++;
    }
    
    // 가운데 목표지점 0(물)을 둠
    strcat(answer+index, "0");
    index++;
    food_num--;
    
    // 상대방
    for(int i = food_len-1; i>0; i--){
        if(food[i] > 1){ // 2이상 값 : 음식 2명이서 나누기 가능
            int temp = food[i]/2;
            
            for(int j = 0; j<temp; j++){
                //answer+index 문자열에 temp(정수)를 문자열로 변환하여 넣음
                sprintf(answer+index, "%d", food_num);
                index++;
            }
        }
        food_num--;
    }
    
    return answer;
}