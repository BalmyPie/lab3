#include "header.hpp"
#ifdef _WIN32
#include <Windows.h>
#endif

int main(){
    #ifdef _WIN32
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    #endif
}