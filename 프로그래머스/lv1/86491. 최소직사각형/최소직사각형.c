#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int temp, h = 0, w = 0;
    
    for(int i = 0; i<sizes_rows; i++){
        if(sizes[i][0] < sizes[i][1]){ // 가로의 크기가 크도록 바꿔줌 (가로 <-> 세로)
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        if(sizes[i][0] > w)
            w = sizes[i][0];
        if(sizes[i][1] > h)
            h = sizes[i][1];
    }
    
    return answer = (w*h);
}