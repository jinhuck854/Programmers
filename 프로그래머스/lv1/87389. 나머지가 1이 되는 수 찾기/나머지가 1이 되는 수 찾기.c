#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0; // x의 값
    int i = 1;
    /*
       n의 값 10
       i값    1 2 3 4 5 6 7 8 9 10
       (n-i)  9 8 7 6 5 4 3 2 1
    */
    
    while(i<n){
        if(n % (n-i) == 1) // 나머지 값이 1일 때, answer값 덮어씌우기
            answer = n-i;
        i++;
    }
    return answer;
}