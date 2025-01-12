#include <iostream>
using namespace std;

int main()
{
    char str[] = "this is a test string that contains 4 words starting with t";
    int count = 0;

    __asm {
        lea esi, str
        xor eax, eax // word counter

        cmp [esi], 't'
        jne find_loop
        inc eax

        find_loop:
            cmp [esi], 0
            je end_find

            cmp [esi], ' '
            je found_word

            inc esi
            jmp find_loop

        found_word:
            inc esi
            cmp [esi], 't'
            je found_t
            jmp find_loop

        found_t:
            inc eax
            jmp find_loop

        end_find:
            mov count, eax
    }

    cout << "Words starting with 't': " << count << endl;
}
