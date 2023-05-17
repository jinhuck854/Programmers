#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    
    for(long long i = 0; i<=n; i++){
        if(i * i == n){
            return answer = (i + 1)*(i + 1);
        }
    }
    
    return -1;
}