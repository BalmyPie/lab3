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
    cout << "Введите размер первого массива: ";
    int N;
    cin >> N;
    cout << "Введите размер второго массива: ";
    int M;
    cin >> M;
}