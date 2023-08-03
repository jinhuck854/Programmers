#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    // a개의 빈병 -> b개의 새 콜라 // n : 처음 내가 가지고 있는 빈병 개수
    int answer = 0;
    
    while(1){
        if(n < a) // 빈병 바꿀 수 없을 때
            break;
        answer += (n / a) * b;
        printf("answer %d\n", answer);
        n = ((n /a) * b) + n % a;
    }
    
    return answer;
}