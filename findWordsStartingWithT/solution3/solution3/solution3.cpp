#include <iostream>
using namespace std;

int main() {
    char str[] = "this is a test string that contains 4 words starting with t";
    int count = 0;

    __asm {
        lea edi, str
        xor eax, eax // current symbol
        xor ecx, ecx // word counter

        find_word :
        mov al, [edi]
            cmp al, 0
            je end_find

            cmp al, ' '
            je skip_space

            cmp al, 't'
            jne skip_word

            inc ecx

            skip_word :
        inc edi
            mov al, [edi]
            cmp al, ' '
            jne skip_word
            cmp al, 0
            jne find_word

            jmp end_find

            skip_space :
        inc edi
            mov al, [edi]
            cmp al, ' '
            je skip_space
            cmp al, 0
            jne find_word

            end_find :
        mov count, ecx
    }

    cout << "Words starting with 't': " << count << endl;
    return 0;
}