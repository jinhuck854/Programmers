#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n) {
    long long answer = 0;
    long long* array = (long long*)malloc(sizeof(long long) * (n*n));
    
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;
    
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else{ // 3이상
        for(int i = 3; i<=n; i++){
            array[i] = (array[i-1] + array[i-2]) % 1234567;
            answer = array[i];
        }
    }
    
    return (answer % 1234567);
}