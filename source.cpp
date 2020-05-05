#include "header.hpp"

void mas1gen(int N, int *mas1){
    for(int i = 0; i < N; i++){
        *(mas1+i) = rand()%40-20;
        cout << *(mas1+i) << ' ';
    }
};

void mas2gen(int M, int *mas2){
    for(int i = 0; i < M; i++){
        *(mas2+i) = rand()%40-20;
        cout << *(mas2+i) << ' ';
    }
};

void mas3gen(int N, int M, int *mas1, int *mas2, int *mas3){
    for (int i = 0; i < N+M; i++){
        while (i < N)
            *(mas3+i) = *(mas1+i);
        while (i >= N && i < M)
            *(mas3+i) = *(mas2+i);
        cout << *(mas3+i) << ' ';
    }
}