#include <iostream>
using namespace std;

int findMax(int* arr, int size)
{
    int max;

    __asm {
        mov esi, arr
        mov ecx, 5
        mov eax, [esi]
        mov max, eax
        add esi, 4

    find_loop:
        dec ecx
        jz end_loop

        mov eax, [esi]
        cmp eax, max
        jle skip
        mov max, eax
        
    skip:
        add esi, 4
        jnz find_loop

    end_loop:
    }

    cout << "Max element: " << max << endl;
    return max;
}

int main()
{
    const int size = 5;
    int arr[size];

    cout << "Enter array of " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    findMax(arr, size);

    return 0;
}
