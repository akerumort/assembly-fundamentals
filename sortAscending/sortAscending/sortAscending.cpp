#include <iostream>
using namespace std;

void sortAscending(int a, int b, int c) 
{
    __asm 
    {
            mov eax, a
            mov ebx, b
            mov ecx, c

            cmp eax, ebx
            jle skip_ab

            // swap
            mov a, ebx
            mov b, eax

        skip_ab:
            // compare b and c
            mov eax, b
            mov ebx, c

            cmp eax, ebx
            jle skip_bc

            mov b, ebx
            mov c, eax

        skip_bc:
            // compare a and b after swaps
            mov eax, a
            mov ebx, b

            cmp eax, ebx
            jle end_sort

            mov a, ebx
            mov b, eax

        end_sort:
    }
    cout << "Sorted numbers: " << a << " " << b << " " << c << endl;
}

int main()
{
    int a, b, c;
    cout << "Enter numbers: " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    sortAscending(a, b, c);
    return 0;
}