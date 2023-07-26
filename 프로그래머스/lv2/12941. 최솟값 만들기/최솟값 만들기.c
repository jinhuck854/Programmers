#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.

void sort_up(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        int min = i;
        
        for(int j = i+1; j<size; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }   
}

void sort_down(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        int min = i;
        
        for(int j = i+1; j<size; j++){
            if(arr[j] > arr[min])
                min = j;
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }   
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0; // 최솟값 sum
    int num;
    
    // 1. A 오름차순 정렬
    // 2. B 내림차순 정렬
    // 3. A와 B의 곱

    sort_up(A, A_len); // 오름차순 정렬
    sort_down(B, B_len); // 내림차순 정렬
    
    for(int i = 0; i<A_len; i++)
        answer += A[i] * B[i];
    
    return answer;
}