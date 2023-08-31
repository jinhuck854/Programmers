#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int swap(int *array[], k){ // 내림차순
    for(int i = 0; i< k-1; i++){
        int index = i;
        for(int j = i+1; j<k; j++){
            if(array[j] > array[index])
                index = j;
        }
        int temp = array[index];
        array[index] = array[i];
        array[i] = temp;
    }
}

int* solution(int k, int score[], size_t score_len) {
    int* answer = (int*)malloc(score_len * sizeof(int));
    // 배열 선언 후 초기화 
    int* array[score_len];
    
    for(int i = 0; i<score_len; i++){
        array[i] = score[i]; // 값 넣기

        swap(array, i+1); // 선택정렬
        
        if(i < k) // 0 ~ (k-1)까지
            answer[i] = array[i];
        else // k ~ score_len까지
            answer[i] = array[k-1];
    }
    return answer;
}