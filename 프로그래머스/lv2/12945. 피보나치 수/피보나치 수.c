#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    long long answer = 0;
    int f1, f2, f3;
    f1 = 0, f2 = 1;
    
    for(int i = 0; i<=(n-2); i++){
        if(n == 2)
            return answer = 1;
        else{
            f3 = (f1 + f2) % 1234567;
            f1 = f2;
            f2 = f3;
        }
    }
    return answer = f3;
}