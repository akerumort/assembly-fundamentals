#include <iostream>
using namespace std;

int main()
{
    int elements[] = { 1, -3, 8, 1, 5, -2, 4, 8, 0 };
    int sum = 0;

    __asm {
        lea esi, elements
        xor eax, eax // current element
        xor ebx, ebx // sum

        sum_loop:
            mov eax, [esi]
            cmp eax, 0 // or test eax, eax
            jz end_loop
            jle skip_neg

            add ebx, eax

        skip_neg:
            add esi, 4
            jmp sum_loop

        end_loop:
            mov sum, ebx
    }

    cout << "Sum of positive elements: " << sum << endl;
    return 0;
}
