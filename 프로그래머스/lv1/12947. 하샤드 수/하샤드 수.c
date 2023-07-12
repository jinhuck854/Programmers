#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    // 1. 자릿수의 합 구하기 // 2. 자릿수의 합으로 원래 x가 나누어떨어지는지 확인 // 3. True / False 반환
    int num = x;
    int sum = 0;
    while(num > 0){
        sum += (num % 10);
        num /= 10;
    }
    
    if(x % sum == 0)
        return answer = true;
    else
        return answer = false;
}