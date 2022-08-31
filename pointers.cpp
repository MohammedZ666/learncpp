#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Declaring a pointer,
    // Here note carefully int* is a pointer datatype, here asterisk '*' is not used as a regular function or operator like
    // the '+' or '-' symbol. Rather it is used to create to point towards n-1 dimensional data types, where n
    // is the number of asterisks used after the datatype. For exmaple: int* points to the address of 1 variable which is
    // n-1 = 1-1 = 0  dimensional. Likewise, int** points to the address to first element of an n-1 = 2-1 = 1
    // dimensional data type. This follows for all primitive types. In short, <primitive_type><n asterisks>
    // where n=0,1,2.. points to the first element of any n-1 dimensional datatype

    int *a = (int *)1024; // Storing an arbitrary address, probably not allocated to us.
    printf("%x\n", a);    // One can use %d, but %x refers to hex which is how address are interpreted.

    // Different from the previous case the asterisks (*) here is used as a dereferencing variable. We all know,
    // The ampersand (&) is a referencing operator, which means it refers to the address of the memory location of a data
    // variable.The asterisks (*) does the exact opposite, it derefers a pointer-variable holding an address to extract
    // the value stored at that address. For example, lets say a pointer holds the address 0xfff where lets say the integer
    // 10 is stored, *pointer_variable expression fetches the 10 from 0xfff. It should be noted the dereferencing a
    // data_variable wont work, beacuse it already holds a value, not an address. It should be type cast to a
    // pointer if the value is inteded to be used as a memory address. But pointers can be referenced and dereferenced.
    // Simply because pointers hold an address of a memory location but they themselves are also saved at a memory location.
    // For example, A pointer holds an address 0x5, but that pointer itself is saved at lets say 0x3.

    int b = 7; // Data variable declaration
    a = &b;    // Storing the address at pointer_variable a.
    printf("Referencing (address of) 'b' %x\n", &b);
    // printf("Attemting to dereference data_variable b %d", *b); // Does not compile

    // After type casting compiles, runs but seg faults, since unallocated memory access attempted.
    // printf("Attemting to dereference data_variable 'b' after casting %d", *((int *)b));
    printf("Referencing (address of) 'a' %x and dereferencing (value at) 'a' '%d'\n", &a, *a);
    return 0;
}
