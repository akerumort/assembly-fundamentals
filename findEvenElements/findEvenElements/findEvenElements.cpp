#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int numbers[size] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
    int evens[size] = { 0 };
    int count = 0;

    __asm {
            lea esi, numbers
            lea edi, evens
            mov ecx, 10
            xor edx, edx // counter

        find_loop:
            mov eax, [esi]
            test eax, 1 // low bit check (0 is even)
            jnz is_odd

            mov [edi], eax
            add edi, 4
            inc edx

        is_odd:
            add esi, 4
            loop find_loop

        mov count, edx
    }

    cout << "Number of even numbers: " << count << endl;
    if (count > 0) {
        cout << "Even numbers: ";
        for (int i = 0; i < count; i++) cout << evens[i] << " ";
    }

    return 0;
}