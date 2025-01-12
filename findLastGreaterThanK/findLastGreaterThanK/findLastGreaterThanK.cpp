#include <iostream>
using namespace std;

int findLastGreaterThanK(int* arr, int size, int k) {
    int lastIndex = -1;

    __asm {
            lea esi, arr
            mov ecx, 5 // size or steps
            mov eax, k

        find_loop:
            cmp ecx, 0
            jle done

            mov edx, [esi]
            cmp edx, eax
            jle skip

            mov lastIndex, ebx

        skip:
            add esi, 4
            inc ebx
            dec ecx
            jnz find_loop

        done:
    }

    if (lastIndex != -1) cout << "Index of the last element: " << lastIndex << endl;
    else cout << "There are no elements that are greater than " << k << endl;
}

int main()
{
    const int size = 5;
    int arr[size] = {1, 5, 7, 3, 8};
    int k = 6;

    findLastGreaterThanK(arr, size, k);
    return 0;
}
