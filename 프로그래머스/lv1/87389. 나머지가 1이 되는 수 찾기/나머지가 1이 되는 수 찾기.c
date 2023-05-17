#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0; // x의 값
    int i = 1;
    // 10 || 9 8 7 6 5 4 3 2 1
    //       1 2 3 4 5 6 7 8 9 10
    
    while(i<n){
        if(n % (n-i) == 1)
            answer = n-i;
        i++;
    }
    return answer;
}