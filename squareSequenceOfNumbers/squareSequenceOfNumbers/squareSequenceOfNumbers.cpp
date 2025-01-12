#include <iostream>
using namespace std;

int main() {
    int numbers[6] = { 2, 3, 4, 5, 6, 7 };  
    int squares[6] = { 0 };

    __asm {
            lea esi, numbers 
            lea edi, squares 
            mov ecx, 6

        squares_loop:
            mov eax, [esi] // added numbers from numbers array
            imul eax, eax
            mov [edi], eax
            add esi, 4
            add edi, 4
            loop squares_loop
    }

    for (int i = 0; i < 6; ++i) cout << squares[i] << " ";
    return 0;
}
