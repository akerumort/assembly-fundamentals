#include <iostream>
using namespace std;

int main() {
    int numbers[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int avg = 0;

    __asm {
        lea eax, numbers // eax - return value
        mov ecx, 10
        xor edx, edx // for sum

        loop_sum :
            add edx, [eax] // dereference pointer
            add eax, 4 // next element
            dec ecx
            jnz loop_sum

            mov eax, edx
            mov ebx, 10
            xor edx, edx // remainder of division

            div ebx // eax / ebx

            mov avg, eax
    }
    cout << "Arithmetic average: " << avg << endl;
    return 0;
}
