#include "header.hpp"

void mas1gen(int N, int *mas1){
    for(int i = 0; i < N; i++){
        *(mas1+i) = rand()%40-20;
        cout << *(mas1+i) << ' ';
    }
    cout << endl;
};

void mas2gen(int M, int *mas2){
    for(int i = 0; i < M; i++){
        *(mas2+i) = rand()%40-20;
        cout << *(mas2+i) << ' ';
    }
    cout << endl;
};

void mas3gen(int N, int M, int *mas1, int *mas2, int *mas3){
    int i = 0, j = 0;
        while(i<N){
            *(mas3+i) = *(mas1+i);
            i++;
        }
        while(i>=N&&i<M+N){
            *(mas3+i) = *(mas2+j);
            i++;
            j++;
        }
        for(int k=0;k<N+M;k++)
        cout << *(mas3+k) << ' ';
}

void massort(int N, int M, int *mas3){
    for (int i = 0; i < M+N; i++){
        if(mas3[i] > mas3[i+1]){
            swap(mas3[i],mas3[i+1]);
        }
    }
        for(int k=0;k<N+M;k++)
        cout << mas3[k] << ' ';
}

