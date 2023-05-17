#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    
    for(long long i = 0; i<=n; i++){ // for문 사용해서 0부터 시작, 조건 맞으면은 return answer
        if(i * i == n){
            return answer = (i + 1)*(i + 1);
        }
    }
    
    return -1;
}