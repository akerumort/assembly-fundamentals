#include <iostream>
using namespace std;

int main()
{
    // when the length of the string is known
    char str[] = "this is a test string that contains 4 words starting with t";
    int count = 0;

    __asm {
            lea edi, str
            mov ecx, 60
            mov al, ' '
            mov ah, 't'
            xor ebx, ebx // word counter
            cmp [edi], ah
            je found_t

        find_loop:
            repne scasb // until gap is found
            jz found_word // gap is found -> word is found
            jnz end_find

        found_word:
            cmp [edi], ah
            je found_t
            jmp find_loop

        found_t:
            inc ebx
            jmp find_loop

        end_find:
            mov count, ebx
    }

    cout << "Words starting with 't': " << count << endl;
    return 0;
}