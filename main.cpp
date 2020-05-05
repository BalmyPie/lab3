#include "header.hpp"
#ifdef _WIN32
#include <Windows.h>
#endif

int main(){
    srand(time(NULL));//patch
    #ifdef _WIN32
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    #endif
/*     setlocale(LC_ALL, "Russian"); */
    cout << "Введите размер первого массива: ";
    int N;
    cin >> N;
    int *mas1 = new int[N];
    mas1gen(N, mas1);
    cout << "Введите размер второго массива: ";
    int M;
    cin >> M;
    int *mas2 = new int[M];
    mas2gen(M, mas2);
    int *mas3 = new int[N+M];
    mas3gen(N, M, mas1, mas2, mas3);
}