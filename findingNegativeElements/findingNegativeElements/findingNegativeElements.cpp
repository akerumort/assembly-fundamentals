#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int numbers[size] = { 5, -5, 8, -3, 0, 7, -1, 12, 6, -9 };
    int negatives[size] = { 0 };
    int count = 0;

    __asm {
        lea esi, numbers
        lea edi, negatives
        mov ecx, 10
        xor edx, edx // counter

        find_loop:
            mov eax, [esi]
            test eax, eax // number sign check
            jge is_positive
            
            mov [edi], eax
            add edi, 4
            inc edx

        is_positive:
            add esi, 4
            loop find_loop

            mov count, edx
    }

    cout << "Number of negative numbers: " << count << endl;
    if (count > 0) {
        cout << "Negative numbers: ";
        for (int i = 0; i < count; ++i) cout << negatives[i] << " ";
    }

    return 0;
}
