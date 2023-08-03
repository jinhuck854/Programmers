#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 1;

    // 최대공약수 1씩 증가하면서 모든 arr[i]와 비교
    int sign = 0; // 공약수인지 체크
    while(sign != 1){
        for(int i = 0; i<arr_len; i++){
            if(answer % arr[i] != 0)
                sign = 1;
            //printf("%d %d %d, sign %d\n", i, answer, arr[i], sign);
        }
        
        if(sign == 0) // 모든 배열의 공약수 조건 O, return
            return answer;
        else
            answer++; // 최대공약수 + 1
        
        sign = 0;
    }
    
    return answer;
    
}