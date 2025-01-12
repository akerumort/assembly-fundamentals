#include <iostream>
using namespace std;

int main()
{
    char str[] = "this is a test string that contains 4 words starting with t";
    char secondWord[2]; // because 'is' has 2 symbols

    __asm {
            lea esi, str
            lea edi, secondWord

        find_loop:
            cmp [esi], 0
            je end_find

            cmp [esi], ' '
            je found_second

            inc esi
            jmp find_loop

        found_second:
            inc esi
            cmp [esi], 0
            je end_find

            cmp [esi], ' '
            je end_find

            mov al, [esi]
            mov [edi], al
            inc edi // every symbol
            jmp found_second

        end_find:
    }
    
    for (int i = 0; i < 2; i++) cout << secondWord[i];
    return 0;
}
